#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#define MAP(c, f) c(f)

#if __riscv_xlen == 32
#define LOAD  lw
#define STORE sw
#define XLEN  4
#else
#define LOAD  ld
#define STORE sd
#define XLEN  8
#endif

#define REGS_LO16(f) \
      f( 1)       f( 3) f( 4) f( 5) f( 6) f( 7) f( 8) f( 9) \
f(10) f(11) f(12) f(13) f(14) f(15)
#ifndef __riscv_e
#define REGS_HI16(f) \
                                    f(16) f(17) f(18) f(19) \
f(20) f(21) f(22) f(23) f(24) f(25) f(26) f(27) f(28) f(29) \
f(30) f(31)
#define NR_REGS 32
#else
#define REGS_HI16(f)
#define NR_REGS 16
#endif

#define REGS(f) REGS_LO16(f) REGS_HI16(f)

#define PUSH(n) STORE concat(x, n), (n * XLEN)(sp);
#define POP(n)  LOAD  concat(x, n), (n * XLEN)(sp);

#define CONTEXT_SIZE  ((NR_REGS + 3) * XLEN)
#define OFFSET_SP     ( 2 * XLEN)
#define OFFSET_CAUSE  ((NR_REGS + 0) * XLEN)
#define OFFSET_STATUS ((NR_REGS + 1) * XLEN)
#define OFFSET_EPC    ((NR_REGS + 2) * XLEN)
/* 
.align 3
//系统调用的入口点,通过ecall指令触发，这个点在cteinit函数中设置,通过内联汇编实现
.globl __am_asm_trap
__am_asm_trap:
  addi sp, sp, -CONTEXT_SIZE

  MAP(REGS, PUSH)

  csrr t0, mcause
  csrr t1, mstatus
  csrr t2, mepc

  STORE t0, OFFSET_CAUSE(sp)
  STORE t1, OFFSET_STATUS(sp)
  STORE t2, OFFSET_EPC(sp)

  # set mstatus.MPRV to pass difftest
  li a0, (1 << 17)
  or t1, t1, a0
  csrw mstatus, t1

  mv a0, sp
  jal __am_irq_handle
  mv sp, a0  // 这里是关键：将返回的新上下文地址设置为新的栈指针
  LOAD t1, OFFSET_STATUS(sp)
  LOAD t2, OFFSET_EPC(sp)
  csrw mstatus, t1
  csrw mepc, t2

  MAP(REGS, POP)

  addi sp, sp, CONTEXT_SIZE
  mret
  //重复执行__am_asm_trap,因为ecall指令会导致mepc寄存器被设置为当前指令的地址
  */
  .align 3
  .globl __am_asm_trap
  __am_asm_trap:
    addi sp, sp, -CONTEXT_SIZE
  
    // 保存通用寄存器
    sw x1,  (1 * 4)(sp)
    sw x2 , (2 * 4)(sp)  
    sw x3,  (3 * 4)(sp)
    sw x4,  (4 * 4)(sp)
    sw x5,  (5 * 4)(sp)
    sw x6,  (6 * 4)(sp)
    sw x7,  (7 * 4)(sp)
    sw x8,  (8 * 4)(sp)
    sw x9,  (9 * 4)(sp)
    sw x10, (10 * 4)(sp)
    sw x11, (11 * 4)(sp)
    sw x12, (12 * 4)(sp)
    sw x13, (13 * 4)(sp)
    sw x14, (14 * 4)(sp)
    sw x15, (15 * 4)(sp)
    sw x16, (16 * 4)(sp)
    sw x17, (17 * 4)(sp)
    sw x18, (18 * 4)(sp)
    sw x19, (19 * 4)(sp)
    sw x20, (20 * 4)(sp)
    sw x21, (21 * 4)(sp)
    sw x22, (22 * 4)(sp)
    sw x23, (23 * 4)(sp)
    sw x24, (24 * 4)(sp)
    sw x25, (25 * 4)(sp)
    sw x26, (26 * 4)(sp)
    sw x27, (27 * 4)(sp)
    sw x28, (28 * 4)(sp)
    sw x29, (29 * 4)(sp)
    sw x30, (30 * 4)(sp)
    sw x31, (31 * 4)(sp)
  
    // 保存CSR寄存器
    csrr t0, mcause
    csrr t1, mstatus
    csrr t2, mepc
  
    sw t0, OFFSET_CAUSE(sp)
    sw t1, OFFSET_STATUS(sp)
    sw t2, OFFSET_EPC(sp)
  
    # set mstatus.MPRV to pass difftest
    li a0, (1 << 17)
    or t1, t1, a0
    csrw mstatus, t1
  
    mv a0, sp
    jal __am_irq_handle
    mv sp, a0  // 这里是关键：将返回的新上下文地址设置为新的栈指针
  
    // 恢复CSR寄存器
    lw t1, OFFSET_STATUS(sp)
    lw t2, OFFSET_EPC(sp)
    csrw mstatus, t1
    csrw mepc, t2
  
    // 恢复通用寄存器
    lw x1,  (1 * 4)(sp)
    lw x3,  (3 * 4)(sp)
    lw x4,  (4 * 4)(sp)
    lw x5,  (5 * 4)(sp)
    lw x6,  (6 * 4)(sp)
    lw x7,  (7 * 4)(sp)
    lw x8,  (8 * 4)(sp)
    lw x9,  (9 * 4)(sp)
    lw x10, (10 * 4)(sp)
    lw x11, (11 * 4)(sp)
    lw x12, (12 * 4)(sp)
    lw x13, (13 * 4)(sp)
    lw x14, (14 * 4)(sp)
    lw x15, (15 * 4)(sp)
    lw x16, (16 * 4)(sp)
    lw x17, (17 * 4)(sp)
    lw x18, (18 * 4)(sp)
    lw x19, (19 * 4)(sp)
    lw x20, (20 * 4)(sp)
    lw x21, (21 * 4)(sp)
    lw x22, (22 * 4)(sp)
    lw x23, (23 * 4)(sp)
    lw x24, (24 * 4)(sp)
    lw x25, (25 * 4)(sp)
    lw x26, (26 * 4)(sp)
    lw x27, (27 * 4)(sp)
    lw x28, (28 * 4)(sp)
    lw x29, (29 * 4)(sp)
    lw x30, (30 * 4)(sp)
    lw x31, (31 * 4)(sp)
    lw x2 ,  (2 * 4)(sp)  // 恢复sp寄存器
  
    addi sp, sp, CONTEXT_SIZE
    mret