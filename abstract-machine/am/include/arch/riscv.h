#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

struct Context {
  // 按照trap.S中的顺序排列成员
  uintptr_t gpr[NR_REGS];  // 首先是通用寄存器数组
  uintptr_t mcause;        // 然后是mcause (OFFSET_CAUSE)
  uintptr_t mstatus;       // 接着是mstatus (OFFSET_STATUS)
  uintptr_t mepc;          // 最后是mepc (OFFSET_EPC)
  void *pdir;              // 地址空间信息(保留在结构末尾)
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]

#endif
