#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t key = inl(KBD_ADDR);  // 从键盘数据寄存器读取键盘码
  
  kbd->keydown = (key & KEYDOWN_MASK) ? 1 : 0;  // 检查最高位，判断是否按下
  kbd->keycode = key & ~KEYDOWN_MASK;  // 去掉最高位，得到实际的键码
}