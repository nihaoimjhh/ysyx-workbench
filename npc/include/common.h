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

#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <verilated.h>
#include "Vysyx_24090003_computer.h"
#include "verilated_fst_c.h"
#include <iostream>


#define FUNC_INFO 18 //elf.h里面有定义

#define ANSI_COLOR_GREEN_BIG   "\033[1;32m"
#define ANSI_COLOR_GREEN_SMALL  "\033[32m"
#define ANSI_COLOR_RED_BIG     "\033[1;31m"
#define ANSI_COLOR_RED_SMALL     "\033[31m"
#define ANSI_COLOR_BLUE_BIG    "\033[1;34m"
#define ANSI_COLOR_BLUE_SMALL   "\033[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
typedef uint32_t word_t;
typedef int32_t  sword_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;
typedef uint16_t ioaddr_t;








/* 功能开关宏 */
#define ENABLE_FTRACE     0  // 函数追踪功能
#define ENABLE_DISASM     0  // 反汇编功能
#define ENABLE_DIFFTEST   1  // 差分测试功能
#define ENABLE_MTRACE     0   // 设置为1开启内存访问追踪，0关闭
#define ENABLE_WAVE     0   // 设置为1开启写入访问追踪，0关闭
#define ENABLE_ETRACE 0   // 异常追踪功能
#define ENABLE_DTRACE 0  // 外设追踪功能
#define ENABLE_WP 0  //监视点 
// #define ENABLE_FTRACE     0  // 函数追踪功能
// #define ENABLE_DISASM     0  // 反汇编功能
// #define ENABLE_DIFFTEST   0  // 差分测试功能
// #define ENABLE_MTRACE 0   // 设置为1开启内存访问追踪，0关闭
// #define ENABLE_WAVE     0   // 设置为1开启写入访问追踪，0关闭
#define IF0(x, y)
#define IF1(x, y) y
#define _IF(cond, x, y) IF##cond(x, y)
#define IF(cond, x, y) _IF(cond, x, y)








#endif
