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

#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <common.h>

typedef struct Decode {
  vaddr_t pc;
  vaddr_t dnpc;
  paddr_t cpu_inst;
  char logbuf[128];
} Decode;
typedef struct CPU_state {
  word_t gpr[32];//设置32个寄存器但是只用了16个，原因是因为nemu有32个寄存器，并且放置顺序是gpr在上面为了方便这里也这样，反正是仿真环境又不是实际的
  word_t pc;
} CPU_state;

#endif
