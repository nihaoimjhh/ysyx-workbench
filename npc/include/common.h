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
#include "Vysyx_24090003_cpu.h"
#include "verilated_vcd_c.h"
#include <iostream>


#define FUNC_INFO 18 //elf.h里面有定义

#define ANSI_COLOR_GREEN_BIG   "\033[1;32m"
#define ANSI_COLOR_GREEN_SMALL  "\033[32m"
#define ANSI_COLOR_RED_BIG     "\033[1;31m"
#define ANSI_COLOR_RED_SMALL     "\033[31m"
#define ANSI_COLOR_BLUE_BIG    "\033[1;33m"
#define ANSI_COLOR_BLUE_SMALL   "\033[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define INV(thispc,thisinst) check_ra(thispc,thisinst);
typedef uint32_t word_t;
typedef int32_t  sword_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;
typedef uint16_t ioaddr_t;




















#endif
