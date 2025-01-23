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

#ifndef __SDB_H__
#define __SDB_H__
#include "common.h"
typedef struct watchpoint {
  word_t ans;
  char expr[200];
  int remove;
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;
word_t expr(char *e, bool *success);
WP *wp_creat(char *args,word_t ans,bool *success);
WP *free_wp(WP *wp,bool *success);
void wp_print();
void wp_remove(char *args);
int wp_check();
void init_sdb();
void init_wp_pool();
void sdb_mainloop();
#endif
