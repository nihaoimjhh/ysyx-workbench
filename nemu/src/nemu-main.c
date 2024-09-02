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

#include <common.h>
#include "monitor/sdb/sdb.h"
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
void test_expr();
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  /* Start engine. */
 // test_expr();
  engine_start();

  return is_exit_status_bad();
}

void test_expr(){
     char buffer[65536];  // 使用固定大小的缓冲区来存储每一行
	 uint32_t ans;//我的答案
	 int nr_expr=0,error=0;//通过与未通过次数
	 bool success=1;//expr是否正确运行
     FILE *fp = fopen("/home/jinghanhui/ysyx-workbench/nemu/tools/gen-expr/results/testbench", "r");//读算式和标准答案
     FILE *error_fp = fopen("/home/jinghanhui/ysyx-workbench/nemu/tools/gen-expr/results/error", "a");//写错误算式以及统计

     if (fp == NULL) {
         perror("fopen");
         exit(EXIT_FAILURE);
     }
     while (fgets(buffer, sizeof(buffer), fp) != NULL) {//一行一行的传入expr
         uint32_t answer;            // 用于存储答案。
         char expression[65536];  // 用于存储表达式，长度为 MAX_EXPR_LEN。
        // 使用 sscanf 解析每一行
         if (sscanf(buffer, "%u %[^\n]",&answer, expression) == 2) {
			 success=1;//判断前置1
			 ans=expr(expression,&success);//获取我的答案
			 //if(success==1)
			 nr_expr++;//能够测试不报错，数目加1
			 //if(ans!=answer&&success==1){
			 if(ans!=answer){
				 fprintf(error_fp, "Expression     :%s\nExpected answer: %u\nYour     answer: %u\n", expression, answer, ans);//打印错误
				 fprintf(error_fp,"\n");//打完空行更好看
				 error++;//错误加一
			 }
         } 
		 else {
             printf("Failed to parse line: %s", buffer);
         }
     }
	 fprintf(error_fp,"test:%d\tpass:%d\terror:%d\n",nr_expr,nr_expr-error,error);//最后统计写入
     fclose(fp);
     fclose(error_fp);
}











