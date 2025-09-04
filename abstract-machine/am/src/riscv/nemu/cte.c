#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

// Context* __am_irq_handle(Context *c) {
//   if (user_handler) {
//     Event ev = {0};
//     switch (c->mcause) {
//       default: ev.event = EVENT_ERROR; break;
//     }

//     c = user_handler(ev, c);
//     assert(c != NULL);
//   }

//   return c;
// }
Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: { // 环境调用异常(ECALL from M-mode)
        // 检查是否是yield调用(通过a7或a5寄存器传递-1)
        #ifdef __riscv_e
        if (c->gpr[15] == -1) { // a5寄存器
        #else
        if (c->gpr[17] == -1) { // a7寄存器
        #endif
          ev.event = EVENT_YIELD; // 识别为yield事件
          c->mepc += 4; // 跳ecall指令，防止重复执行
        } else {
          ev.event = EVENT_ERROR;
        }
        break;
      }
      default: ev.event = EVENT_ERROR; break;
    }
    
    c = user_handler(ev, c);//中断函数就是根据识别事件打印y
    assert(c != NULL);
  }

  return c;
}
extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  // 在栈顶分配Context结构体空间
  Context *ctx = (Context*)((uintptr_t)kstack.end - sizeof(Context));
  
  // 初始化所有寄存器为0
  for (int i = 0; i < NR_REGS; i++) {
    ctx->gpr[i] = 0;
  }
  // 设置栈指针 - 指向Context结构体的起始位置
  ctx->gpr[2] = (uintptr_t)ctx; // sp (x2)
  
  // 设置参数寄存器
  ctx->gpr[10] = (uintptr_t)arg; // a0 (x10) - 函数参数
  
  // 设置程序计数器为入口函数地址
  ctx->mepc = (uintptr_t)entry;
  
  ctx->mstatus = 0x1800; // 设置MPP=11(Machine mode)
  
  ctx->mcause = 11;
  
  // 地址空间信息
  ctx->pdir = NULL;
  
  return ctx;
}
void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
