# RISC-V CSR寄存器和异常处理实现

## 实现的功能

### 1. CSR寄存器集成到RegFile

实现了以下4个CSR寄存器，现在集成在 `ysyx_24090003_RegFile.v` 中：

- **mstatus** (0x300) - 机器状态寄存器
- **mtvec** (0x305) - 机器陷阱向量寄存器（存放异常入口地址）
- **mepc** (0x341) - 机器异常程序计数器（存放触发异常的PC）
- **mcause** (0x342) - 机器异常原因寄存器（存放触发异常的原因）

### 2. 支持的指令

#### CSR指令

- **CSRRW** (CSR Read and Write)
  - 指令格式: `csrrw rd, csr, rs1`
  - 功能: 将CSR的旧值写入rd，同时将rs1的值写入CSR
  - 编码: `imm[11:0] rs1 001 rd 1110011`

- **CSRRS** (CSR Read and Set)
  - 指令格式: `csrrs rd, csr, rs1`
  - 功能: 将CSR的旧值写入rd，同时将CSR与rs1进行OR操作后写入CSR
  - 编码: `imm[11:0] rs1 010 rd 1110011`

#### 系统指令

- **ECALL** (Environment Call)
  - 指令格式: `ecall`
  - 功能: 触发环境调用异常
  - 编码: `000000000000 00000 000 00000 1110011`

- **MRET** (Machine Return from trap)
  - 指令格式: `mret`
  - 功能: 从机器模式异常返回，将PC设置为mepc寄存器的值
  - 编码: `001100000010 00000 000 00000 1110011`

### 3. 异常处理流程

#### ECALL异常处理

当ECALL指令执行时，硬件自动完成：

1. 将当前PC值保存到`mepc`寄存器
2. 在`mcause`寄存器中设置异常号（11 - 机器模式环境调用）
3. 从`mtvec`寄存器中取出异常入口地址
4. 跳转到异常入口地址

#### MRET异常返回

当MRET指令执行时，硬件自动完成：

1. 从`mepc`寄存器中取出返回地址
2. 跳转到返回地址，恢复异常前的执行流程

### 4. 架构设计

#### 模块层次

```
CPU模块
├── IFU (指令获取)
├── IDU (指令解码) - 识别CSR指令和ECALL
├── EXU (执行单元) - **处理ECALL异常和PC跳转逻辑**
├── LSU (内存访问)
└── WBU (写回单元)
    └── RegFile - **集成所有寄存器，包括CSR**
```

#### 关键修改

1. **ysyx_24090003_RegFile.v**: 
   - 集成CSR寄存器实例
   - 实现CSR读写逻辑
   - 处理ECALL异常时的寄存器更新
   - 提供mtvec值给EXU异常处理逻辑

2. **ysyx_24090003_EXU.v**: 
   - **新增ECALL异常处理逻辑**
   - **接收mtvec值并处理异常PC跳转**
   - 传递CSR数据
   - 统一处理所有PC更新逻辑

3. **ysyx_24090003_WBU.v**: 
   - 扩展接口支持CSR操作
   - 处理CSR读取值的寄存器写回

4. **ysyx_24090003_cpu.v**: 
   - **简化设计，移除ECALL异常处理逻辑**
   - 直接使用EXU计算的下一PC
   - 连接mtvec信号到EXU

5. **ysyx_24090003_IDU.v**: 
   - 扩展指令解码支持CSR指令
   - 识别ECALL指令

### 5. 信号流

#### CSR读写操作

```
IDU -> CSR地址/操作类型 -> WBU -> RegFile -> CSR寄存器
RegFile -> CSR数据 -> WBU -> 寄存器写回
```

#### 异常处理与返回

```verilog
// ECALL异常处理
IDU识别ECALL -> EXU接收mtvec -> EXU计算异常跳转PC -> IFU更新PC
同时：RegFile保存PC到mepc，设置mcause

// MRET异常返回  
IDU识别MRET -> EXU接收mepc -> EXU计算返回PC -> IFU更新PC
```

### 6. 优势

1. **统一管理**: 所有寄存器（通用寄存器+CSR）集中在RegFile中
2. **简化设计**: CPU模块不再需要维护重复的CSR逻辑
3. **清晰接口**: CSR操作通过明确的接口进行
4. **易于扩展**: 添加新的CSR寄存器只需要修改RegFile

### 7. 最新修正 (基于C语言规范)

### 7.1 CSRRS指令修正
根据RISC-V规范和C语言参考实现，修正了CSRRS指令的行为：

**修正前的问题：**
- CSRRS总是写入CSR，不管rs1是否为x0
- 这与RISC-V规范不符

**修正后的行为：**
- **只有当rs1 != x0时才修改CSR寄存器**
- 当rs1 == x0时，CSRRS相当于纯读取操作（不修改CSR）
- 这符合RISC-V规范：rs1为x0表示"不修改CSR的读取操作"

### 7.2 CSRRW指令确认
CSRRW指令行为保持正确：
- **总是写入CSR寄存器**，无论rs1是否为x0
- 只有当rd != x0时才将CSR旧值写回目标寄存器

### 7.3 技术实现细节

**RegFile模块修正：**
```verilog
// 在CSRRS操作中增加rs1地址检查
2'b10: begin  // CSRRS: 只有rs1不为x0时才写入
    if (i_rs1_addr != 5'b0) begin
        r_mstatus <= r_mstatus | i_csr_wdata;
    end
end
```

**IDU模块修正：**
```verilog
// CSR指令的寄存器写回逻辑
3'b001: begin  // CSRRW
    o_reg_wen = (o_rd_addr != 5'b0) ? 1'b1 : 1'b0;  // 只有rd!=x0时写回
    o_csr_we = 1'b1;  // 总是写入CSR
end
3'b010: begin  // CSRRS  
    o_reg_wen = (o_rd_addr != 5'b0) ? 1'b1 : 1'b0;  // 只有rd!=x0时写回
    o_csr_we = 1'b1;  // 设置写使能，实际写入由RegFile根据rs1判断
end
```

**修正的关键接口：**
- RegFile增加了`i_rs1_addr`输入端口
- WBU模块传递rs1_addr给RegFile
- 保持了完整的RISC-V CSR操作语义

### 7.4 测试用例
```assembly
# CSRRS读取测试（rs1=x0，不修改CSR）
csrrs x1, mstatus, x0    # 仅读取mstatus到x1，不修改mstatus

# CSRRS置位测试（rs1!=x0，修改CSR）  
li x2, 0x8               # 设置要置位的位
csrrs x1, mstatus, x2    # 读取mstatus到x1，同时将x2的位置位到mstatus

# CSRRW写入测试
li x3, 0x1800
csrrw x1, mstatus, x3    # 将x3写入mstatus，旧值存入x1
```

```assembly
# 设置异常处理程序地址
li t0, 0x80000000
csrrw zero, mtvec, t0

# 触发环境调用异常
ecall

# 异常处理程序（在0x80000000处）
exception_handler:
    # 保存上下文，处理异常
    # ...
    
    # 从异常返回
    mret

# 读取异常相关寄存器
csrrw t1, mepc, zero      # 读取异常PC
csrrw t2, mcause, zero    # 读取异常原因
```

### 8. 异常追踪功能 (ETRACE)

系统新增了异常追踪功能，通过DPIC函数接口实现异常行为的可视化跟踪：

#### 8.1 追踪函数

**异常进入追踪：**
```c
void log_exception_trace(word_t cause, vaddr_t epc, vaddr_t target)
```
- 追踪ECALL异常的触发
- 显示异常原因、触发PC和跳转目标地址
- 使用红色高亮显示异常进入

**异常返回追踪：**
```c
void log_exception_return(word_t cause, vaddr_t ret_addr)
```
- 追踪MRET异常返回
- 显示返回地址
- 使用绿色高亮显示异常返回

#### 8.2 Verilog实现

**EXU模块中的DPIC声明：**
```verilog
import "DPI-C" function void log_exception_trace(input int cause, input int epc, input int target);
import "DPI-C" function void log_exception_return(input int cause, input int ret_addr);
```

**异常追踪逻辑：**
```verilog
// 异常追踪处理
always @(*) begin
    if (i_ecall) begin
        // ECALL异常追踪：记录异常原因(11)、当前PC和跳转目标
        log_exception_trace(32'd11, i_pc, i_mtvec);
    end
    else if (i_mret) begin
        // MRET返回追踪：记录返回异常原因(11)和返回地址
        log_exception_return(32'd11, i_mepc);
    end
end
```

#### 8.3 输出示例

```
[etrace] Exception:Environment call from M-mode (cause = 11), epc = 0x80000004, target = 0x80000100
[etrace] Return from Environment call from M-mode exception to 0x80000008
```

### 9. 验证要点

1. CSR寄存器的正确读写
2. ECALL异常触发时的寄存器状态保存
3. 异常跳转地址的正确获取
4. 不同CSR操作类型的正确实现
5. RegFile中CSR与通用寄存器的隔离
6. **新增：异常追踪功能的正确工作**
7. **新增：ETRACE输出的格式和时机验证**

这个集成设计遵循模块化原则，将寄存器管理统一到RegFile中，使整个CPU设计更加清晰和易于维护。同时新增的异常追踪功能提供了强大的调试和验证能力。
