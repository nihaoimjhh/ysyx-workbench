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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <unistd.h> //forgetpid

#define MAX_DEPTH 50
// this should be enough
static char buf[65536] = {};
static char bufcal[6553600] = {};//用来计算“正确”的uint_32类型。
static char code_buf[6553600 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n" 
"int main() { "
"  uint32_t result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";//模版，用来创建C语言程序然后计算答案

static int choose(int n) {
  return rand()%n;
}

static void gen_num() {
     uint32_t num = rand() % 100; // 生成一个0到99之间的随机数
	 char num_str[12];
	 sprintf(num_str, "%u", num); // 将数字转换为字符串
	 strcat(buf, num_str); // 将字符串追加到 buf 中
	 strcat(bufcal, num_str); // 将字符串追加到 buf 中
}

static void gen_char(char c) {
	 char temp[2] = {0,'\0'}; // 创建一个包含字符和结束符的临时字符串
	 temp[0]=c;
	 strcat(buf, temp); // 将临时字符串追加到 buf 的末尾
	 strcat(bufcal, temp); // 将临时字符串追加到 buf 的末尾
}
static void gen_space() {
	 char temp[2] = {0,'\0'}; // 创建一个包含字符和结束符的临时字符串
	 if(choose(3))
	 temp[0]=' ';
	 strcat(buf, temp); // 将临时字符串追加到 buf 的末尾
	 strcat(bufcal, temp); // 将临时字符串追加到 buf 的末尾
}
static void gen_rand_op() {
	 char ops[] = "+-*/"; // 操作符集合
     char op = ops[rand() % 4]; // 随机选择一个操作符
	 gen_char(op); // 将操作符追加到 buf 中
}

static void gen_rand_expr(int depth,int *success) {
 
  if (depth > MAX_DEPTH || strlen(buf) > 65500){*success=0;return;};//递归深度不能太大
  switch (choose(3)){
		 case 0: 
		 	 depth++;
		 	 gen_space();
			 gen_num();
			
			 break;
		 case 1: 
			 depth++;
             strcat(bufcal,"(uint32_t)");
			 gen_char('(');
			 gen_space();
			 gen_rand_expr(depth,success);
			 gen_space(); 
			 gen_char(')'); 
			 gen_space();
			
			 break;
		 default: 
			 depth++;
			 gen_rand_expr(depth,success); 
			 gen_rand_op(); 
			 gen_rand_expr(depth,success); 
			 depth++;
			 break;
		}
}


int main(int argc, char *argv[]) {
  int seed = time(NULL) ^ getpid();
  int success=1;
  srand(seed);//随机数要用的种子
  int loop = 1;//循环次数
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);//运行程序读取循环次数
  }
  int i;
  for (i = 0; i < loop; i ++) {
     buf[0] = '\0';//清空buff
     bufcal[0] = '\0';//清空buff
     success=1;
    gen_rand_expr(0,&success);//生成表达式应该是直接存储到buf里面
    if(success==0)
       continue;//防止生成一半的表达式
    sprintf(code_buf, code_format, bufcal);//用来插入表达式到答案计算代码里面

    FILE *testbench10 = fopen("/home/jinghanhui/ysyx-workbench/nemu/tools/gen-expr/results/testbench10", "a");//创建文件
    FILE *fp = fopen("/tmp/.code10.c", "w");//创建文件
    assert(fp != NULL);
    fputs(code_buf, fp);//写入答案计算代码
    fclose(fp);//关闭文件

    int ret = system("gcc -Werror /tmp/.code10.c -o /tmp/.expr10  > /dev/null 2>&1");//看有无除0有就滤除该表达式
    if (ret != 0) continue;

    fp = popen("/tmp/.expr10", "r");//返回代码计算结果,管道
    assert(fp != NULL);

    uint32_t result;
    ret = fscanf(fp, "%u", &result);//读取结果存到ret
	 fprintf(testbench10,"%u %s\n", result, buf);//打印表达式以及电脑计算的值,写到文件里面去
    pclose(fp);
    fclose(testbench10);
   }
  return 0;
}

