#include <am.h>
#include <klib.h>
#include <rtthread.h>

// 全局变量用于传递上下文切换参数
static rt_ubase_t *switch_from = NULL;
static rt_ubase_t *switch_to = NULL;

// 包裹函数的参数结构
typedef struct {
  void (*tentry)(void *);
  void *parameter;
  void (*texit)(void);
} wrapper_args_t;

// 包裹函数，用于处理线程入口和退出
static void thread_wrapper(void *arg) {
  wrapper_args_t *args = (wrapper_args_t *)arg;
  
  // 调用线程入口函数
  args->tentry(args->parameter);
  
  // 如果线程入口函数返回，则调用退出函数
  args->texit();
  
  // 不应该执行到这里
  assert(0);
}

// static Context* ev_handler(Event e, Context *c) {
//   switch (e.event) {
//     case EVENT_YIELD:
//       // 处理上下文切换
//       if (switch_from != NULL) {
//         // 保存当前上下文
//         *switch_from = (rt_ubase_t)c;
//       }
//       if (switch_to != NULL) {
//         // 切换到目标上下
//         c = (Context *)(*switch_to);
//       }
//       // 清除全局变量
//       switch_from = NULL;
//       switch_to = NULL;
//       return c;
//     case EVENT_IRQ_TIMER://不加这个native会报错
//       // 处理时钟中断
//       // 时钟中断，返回当前上下文即可
//       return c;
//     default: 
//       printf("Unhandled event ID = %d\n", e.event); 
//       assert(0);
//   }
//   return c;
// }
static Context* ev_handler(Event e, Context *c) {
  // 不检查事件类型，直接执行上下文切换逻辑
  if (switch_from != NULL) {
    *switch_from = (rt_ubase_t)c;
  }
  if (switch_to != NULL) {
    c = (Context *)(*switch_to);
  }
  switch_from = NULL;
  switch_to = NULL;
  return c;
}
void __am_cte_init() {
  cte_init(ev_handler);
}

void rt_hw_context_switch_to(rt_ubase_t to) {
  switch_to = (rt_ubase_t *)to;
  switch_from = NULL;
  yield();
}

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
  switch_from = (rt_ubase_t *)from;
  switch_to = (rt_ubase_t *)to;
  yield();
}

void rt_hw_context_switch_interrupt(void *context, rt_ubase_t from, rt_ubase_t to, struct rt_thread *to_thread) {
  assert(0);
}

rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter, rt_uint8_t *stack_addr, void *texit) {
  // 对齐栈地址到sizeof(uintptr_t)
  uintptr_t aligned_stack = (uintptr_t)stack_addr & ~(sizeof(uintptr_t) - 1);
  // 在栈上为包裹函数参数分配空间
  wrapper_args_t *args = (wrapper_args_t *)(aligned_stack - sizeof(wrapper_args_t));
  args->tentry = (void (*)(void *))tentry;//要强制转一下
  args->parameter = parameter;
  args->texit = (void (*)(void))texit;
  Area kstack = {
    .start = (void *)((uintptr_t)args - 4096), // 4KB
    .end = (void *)args
  };
  
  // 使用kcontext创建上下文，入口为包裹函数，参数为args
  Context *ctx = kcontext(kstack, thread_wrapper, args);
  
  return (rt_uint8_t *)ctx;
}
