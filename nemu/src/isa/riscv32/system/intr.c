/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include <isa.h>
#include <stdio.h>

// 异常名称
static const char *exception_names[] = {
    [11] = "Environment call from M-mode"
};
static inline void log_exception_trace(word_t cause, vaddr_t epc, vaddr_t target);
static inline const char *get_exception_name(word_t cause);
void log_exception_return(word_t cause, vaddr_t ret_addr);


word_t isa_raise_intr(word_t NO, vaddr_t epc) {

  log_exception_trace(NO, epc, cpu.mtvec);
  cpu.mepc = epc;
  cpu.mcause = NO;
  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

// 获取异常名称
static inline const char *get_exception_name(word_t cause) {
  if (cause & 0x80000000) {
    return "Interrupt"; // 中断
  } else if (cause < sizeof(exception_names) / sizeof(char *) && exception_names[cause] != NULL) {
    return exception_names[cause];
  } else {
    return "Unknown exception";
  }
}

// 异常追踪 - 使用红色显示异常调用
static inline void log_exception_trace(word_t cause, vaddr_t epc, vaddr_t target) {
#ifdef CONFIG_ETRACE
  // 仅追踪11号异常 (ECALL from M-mode)
  if (cause == 11) {
    printf("\033[1;31m[etrace] Exception: %s (cause = %u), epc = " FMT_WORD ", target = " FMT_WORD "\033[0m\n",
           get_exception_name(cause), cause, epc, target);
  }
#endif
}

// 异常返回追踪 - 使用绿色显示异常返回
void log_exception_return(word_t cause, vaddr_t ret_addr) {
#ifdef CONFIG_ETRACE
  // 仅追踪从11号异常返回
  if (cause == 11) {
    printf("\033[1;32m[etrace] Return from %s exception to " FMT_WORD "\033[0m\n",
           get_exception_name(cause), ret_addr);
  }
#endif
}