# 打字游戏与NEMU外设交互详解

## 一、系统架构概览

### 1.1 分层架构
```
┌─────────────────┐
│    打字游戏     │  ← 应用层：游戏逻辑、渲染、输入处理
├─────────────────┤
│  抽象机器(AM)   │  ← 抽象层：统一I/O接口，屏蔽硬件差异
├─────────────────┤
│      NEMU       │  ← 模拟层：硬件模拟，设备实现
├─────────────────┤
│   宿主操作系统   │  ← 底层：SDL、系统调用
└─────────────────┘
```

### 1.2 关键组件
- **游戏引擎**：30FPS固定帧率，逻辑与渲染分离
- **I/O系统**：宏驱动的统一接口，设备无关访问
- **设备模拟**：MMIO地址映射，回调函数处理
- **外设实现**：SDL图形、键盘队列、系统时钟

## 二、I/O操作机制

### 2.1 核心宏定义
```c
#define io_read(reg) \
  ({ reg##_T __io_param; \
    ioe_read(reg, &__io_param); \
    __io_param; })

#define io_write(reg, ...) \
  ({ reg##_T __io_param = (reg##_T) { __VA_ARGS__ }; \
    ioe_write(reg, &__io_param); })
```

### 2.2 设备分发机制
```c
static void *lut[128] = {
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  // ...
};

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
```

## 三、NEMU外设模拟

### 3.1 地址映射机制
```c
// 设备注册
void add_mmio_map(const char *name, paddr_t addr, void *space, 
                  uint32_t len, io_callback_t callback);

// 地址访问拦截
word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  return mmio_read(addr, len);  // 外设访问
}
```

### 3.2 主要设备实现

#### 定时器模拟
```c
// 系统时间获取
uint64_t get_time() {
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  return now.tv_sec * 1000000 + now.tv_nsec / 1000 - boot_time;
}

// 定时器回调
static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  if (!is_write && offset == 4) {  // 读取高32位时更新
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;     // 低32位
    rtc_port_base[1] = us >> 32;         // 高32位
  }
}
```

#### VGA显示模拟
```c
// SDL初始化
static void init_screen() {
  SDL_CreateWindowAndRenderer(SCREEN_W, SCREEN_H, 0, &window, &renderer);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
                              SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

// 屏幕更新
void vga_update_screen() {
  if (vgactl_port_base[1]) {  // 检查同步寄存器
    SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    vgactl_port_base[1] = 0;  // 清除同步标志
  }
}
```

#### 键盘输入模拟
```c
// 键盘队列
static int key_queue[1024] = {};
static int key_f = 0, key_r = 0;

// SDL事件处理
void device_update() {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    if (event.type == SDL_KEYDOWN || event.type == SDL_KEYUP) {
      uint8_t scancode = event.key.keysym.scancode;
      bool is_keydown = (event.type == SDL_KEYDOWN);
      uint32_t am_code = keymap[scancode] | (is_keydown ? 0x8000 : 0);
      key_enqueue(am_code);
    }
  }
}

// 键盘读取回调
static void i8042_data_io_handler(uint32_t offset, int len, bool is_write) {
  i8042_data_port_base[0] = key_dequeue();
}
```

## 四、游戏逻辑解析

### 4.1 核心数据结构
```c
struct character {
  char ch;     // 字符内容('A'-'Z')
  int x, y;    // 屏幕坐标
  int v;       // 垂直速度(>0下落, <0上升, =0停留)
  int t;       // 状态计时器
} chars[128];
```

### 4.2 字符状态机
```
生成 → 下落(白色,v>0) → ┌─击中(绿色,v<0) → 消失
                      └─未击中(红色,v=0,t=FPS) → 消失
```

### 4.3 主游戏循环
```c
int main() {
  int current = 0, rendered = 0;
  uint64_t t0 = io_read(AM_TIMER_UPTIME).us;
  
  while (1) {
    // 1. 时间管理：计算需要更新的帧数
    int frames = (io_read(AM_TIMER_UPTIME).us - t0) / (1000000 / FPS);
    
    // 2. 逻辑更新：追赶时间
    for (; current < frames; current++) {
      game_logic_update(current);
    }
    
    // 3. 输入处理：轮询键盘
    while (1) {
      AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
      if (ev.keycode == AM_KEY_NONE) break;
      if (ev.keydown && lut[ev.keycode]) check_hit(lut[ev.keycode]);
    }
    
    // 4. 渲染：只在逻辑更新后渲染
    if (current > rendered) {
      render();
      rendered = current;
    }
  }
}
```

### 4.4 关键算法

#### 字符生成
```c
void new_char() {
  for (int i = 0; i < 128; i++) {
    if (!chars[i].ch) {
      chars[i].ch = 'A' + randint(0, 25);           // 随机字母
      chars[i].x = randint(0, screen_w - CHAR_W);   // 随机位置
      chars[i].y = 0;                               // 顶部开始
      chars[i].v = (screen_h - CHAR_H + 1) / randint(45, 60);  // 1.5-2秒到底
      chars[i].t = 0;
      return;
    }
  }
}
```

#### 击中检测
```c
void check_hit(char ch) {
  int best = -1;
  // 找到最低位置的匹配字符
  for (int i = 0; i < 128; i++) {
    if (chars[i].ch == ch && chars[i].v > 0 && 
        (best < 0 || chars[i].y > chars[best].y)) {
      best = i;
    }
  }
  
  if (best == -1) {
    wrong++;  // 无匹配字符
  } else {
    hit++;    // 击中成功
    chars[best].v = -(screen_h - CHAR_H + 1) / FPS;  // 1秒上升消失
  }
}
```

#### 双缓冲渲染
```c
void render() {
  static int last_x[128], last_y[128], last_n = 0;
  
  // 清除上一帧
  for (int i = 0; i < last_n; i++) {
    io_write(AM_GPU_FBDRAW, last_x[i], last_y[i], blank, 8, 16, false);
  }
  
  // 绘制当前帧
  last_n = 0;
  for (int i = 0; i < 128; i++) {
    if (chars[i].ch) {
      last_x[last_n] = chars[i].x;
      last_y[last_n] = chars[i].y;
      last_n++;
      
      int color = (chars[i].v > 0) ? WHITE : (chars[i].v < 0 ? GREEN : RED);
      io_write(AM_GPU_FBDRAW, chars[i].x, chars[i].y,
               texture[color][chars[i].ch - 'A'], 8, 16, false);
    }
  }
  
  // 同步屏幕
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
}
```

## 五、完整数据流追踪

### 5.1 键盘输入流
```
物理按键 → SDL事件 → 键码转换 → 队列存储 → 游戏读取 → 字符匹配 → 状态更新
```

### 5.2 图形输出流
```
像素数据 → 帧缓冲区 → 同步信号 → SDL纹理 → 屏幕显示
```

### 5.3 时间管理流
```
系统调用 → 相对时间 → 帧数计算 → 逻辑更新 → 追赶机制
```

## 六、性能与设计分析

### 6.1 时间复杂度
- **字符更新**：O(n)，n=128
- **击中检测**：O(n)，线性搜索
- **渲染**：O(n)，遍历所有字符
- **总体**：O(n)，实时性能保证

### 6.2 内存使用
- **字符数组**：128×20字节 = 2.5KB
- **纹理缓存**：3×26×128×4字节 = 40KB
- **总计**：约42.5KB，内存效率高

### 6.3 设计优势
- **固定时间步长**：逻辑帧率恒定，不受硬件影响
- **分离式渲染**：减少无效渲染，提高性能
- **对象池模式**：避免动态内存分配
- **事件驱动**：响应及时，资源利用率高

### 6.4 模拟vs真实硬件

| 方面 | 真实硬件 | NEMU模拟 | 优劣对比 |
|------|----------|----------|----------|
| **时钟** | 晶体振荡器 | 系统调用 | 精度略低，调试友好 |
| **显示** | VGA控制器 | SDL图形 | 功能完整，跨平台 |
| **键盘** | PS/2中断 | 事件轮询 | 延迟稍高，实现简单 |
| **串口** | UART芯片 | 标准输出 | 直接有效 |

## 七、总结

这个打字游戏系统展现了完整的计算机系统层次结构：

1. **硬件抽象**：AM层提供统一接口，屏蔽硬件差异
2. **设备模拟**：NEMU通过软件实现硬件功能，保持编程模型一致
3. **系统编程**：展示I/O、中断、内存映射等核心概念
4. **实时系统**：固定帧率、时间管理、性能优化

通过这个案例，可以深入理解：
- 分层架构的设计思想
- 硬件-软件接口的实现方式
- 实时系统的时间管理机制
- 设备驱动的工作原理

这是一个集教学性、实践性于一体的优秀系统编程案例。
