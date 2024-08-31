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

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";//模版，用来创建C语言程序然后计算答案


static int choose(int n) {
  return rand()%n;
}

static void gen_num() {
     unsigned int num = rand() % 10; // 生成一个0到99之间的随机数
	 char num_str[12];
	 sprintf(num_str, "%u", num); // 将数字转换为字符串
	 strcat(buf, num_str); // 将字符串追加到 buf 中
}

static void gen_char(char c) {
	 char temp[2] = {0,'\0'}; // 创建一个包含字符和结束符的临时字符串
	 temp[0]=c;
	 strcat(buf, temp); // 将临时字符串追加到 buf 的末尾
}
static void gen_space() {
	 char temp[2] = {0,'\0'}; // 创建一个包含字符和结束符的临时字符串
	 if(choose(3))
	 temp[0]=' ';
	 strcat(buf, temp); // 将临时字符串追加到 buf 的末尾
}
static void gen_rand_op() {
	 char ops[] = "+-*/"; // 操作符集合
     char op = ops[rand() % 4]; // 随机选择一个操作符
	 gen_char(op); // 将操作符追加到 buf 中
}

static void gen_rand_expr(int depth,int *success) {
 
  if (depth > 20 || strlen(buf) > 65500){*success=0;return;};//递归深度不能太大
  switch (choose(3)){
		 case 0: 
		 	 depth++;
		 	 gen_space();
			 gen_num();
			
			 break;
		 case 1: 
			 depth++;
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
  int seed = time(0);
  int success=1;
  srand(seed);//随机数要用的种子
  int loop = 1;//循环次数
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);//运行程序读取循环次数
  }
  int i;
  for (i = 0; i < loop; i ++) {
     buf[0] = '\0';//清空buff
     success=1;
    gen_rand_expr(0,&success);//生成表达式应该是直接存储到buf里面
    if(success==0)
       continue;
    sprintf(code_buf, code_format, buf);//用来插入表达式到答案计算代码里面

    FILE *fp = fopen("/tmp/.code.c", "w");//创建文件
    assert(fp != NULL);
    fputs(code_buf, fp);//写入答案计算代码
    fclose(fp);//关闭文件

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");//
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");//返回代码计算结果,管道
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);//读取结果存到ret
    pclose(fp);
     if (result <= (unsigned int)0x7FFFFFFF) { // 如果结果是无符号数并且小于等于 2^31 - 1 (即 2147483647)
    printf("%u %s\n", result, buf);//打印表达式以及电脑计算的值
  } 
  else
      continue;
      }
  return 0;
}
