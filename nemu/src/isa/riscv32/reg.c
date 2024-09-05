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
#include "local-include/reg.h"
//#include <string.h>
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
     int i;
	 for(i=0;i<ARRLEN(regs);i++){
		 printf("%s\t%#x\t%u\n",regs[i],gpr(i),gpr(i));//local-include有定义这个宏
	 
	 }
}
word_t isa_reg_str2val(const char *s, bool *success) {	
	 int i=0;//为什么有时候不初始化会报错呢，上面那个没初始化都不报错，
	 char temp0[3]="$0";
	 char tempreg[4]={};
	 strncpy(tempreg,s+1,4);//去掉$符号这样才能搜索，末尾直接填最大值如果 source 的长度小于 n，strncpy 会将 destination 的剩余部分用 null 字符 '\0' 填充，直到复制的字符数达到 n。
	 
	 if(strcmp(s,temp0)==0){//第一个是自带$的
		 return gpr(0);//local-include有定义这个宏
	 }
	else{
	     for(i=1;i<ARRLEN(regs);i++){//有这个宏就用
			 if(strcmp(tempreg,regs[i])==0){
				 return gpr(i);//local-include有定义这个宏
			 }
		 }
		 if(i==ARRLEN(regs)){
			 printf("Register %s was not found\n",s);
			 *success=0;
		 }
	}
     return 0;
}
