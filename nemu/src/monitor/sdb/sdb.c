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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "memory/vaddr.h"//只放vaddr.h找不到，上面有提示加文件夹

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state=NEMU_QUIT;
  return -1;
}
static int cmd_si(char *args) {
	uint64_t n;
	nemu_state.state=NEMU_RUNNING;
	if(args==NULL){
		 n=1;//默认1
	 }
	else{
    sscanf(args,"%lu",&n);
	 }
    cpu_exec(n);
    cpu_exec(0);
	
  return 0;//
}
static int cmd_info(char *args) {
	 if(args==NULL) {printf("please enter r or w.\ninfo r is print regs and infor w is print watchpoints.\n"); return 0;}
	 if(strcmp(args,"r")==0){
		 isa_reg_display();
	} 
	 else if(strcmp(args,"w")==0){
		//print watchpoins;
	 }
	 else {
		 printf("plase enter the right choice r(regs) or w(watchpoints)\n"); 
	 }
  return 0;
}
static int cmd_x(char *args){
	 if(args==NULL) {printf("Please enter the number N to be printed and which address EXPR\nexample: x 10 0x80000000(The 8-bit hexadecimal address has 32 bits)\n"); return 0;}
	 char *args1,*args2;
	 int N,i;
	 word_t EXPR;
	 word_t addr;//相当于uint32_t

	 args1=strtok(NULL," ");
	 if(args1==NULL||sscanf(args1,"%d",&N)==0){printf("Please enter the number N\n"); return 0;}//短接碰见NULL直接return防止报错,防止用户乱输
	 
	 args2=strtok(NULL," ");
	 if(args2==NULL||sscanf(args2,"0x%x",&EXPR)==0){printf("Please enter the legitimate address EXPR(The 8-bit hexadecimal address has 32 bits)\n"); return 0;}//必需把null判断放在前面，短接，不能执行后面判断，不然直接崩溃。
	 else addr=EXPR;
	 for(i=0;i<N;i++){
		 printf("addr:%x\t%x\n",addr,vaddr_read(addr,4));
		 addr+=4;
	 }
	 

	



	 return 0;
}
static int cmd_p(char *args){
	 if(args==NULL) {printf("Please enter your expression\n");return 0;}
	 bool success= true;
	 word_t ans;
	 ans=expr(args,&success);
	 if(success){
		 printf("ans=%u\n",ans);//ans测试
	 }
	 else{
		 printf("Something went wrong Please check your expression\n");
	 }
	 return 0;
}




static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "step excute", cmd_si },
  { "info", "info r(regs) or info w(watchpoints)", cmd_info },
  { "x", "examine mem", cmd_x},
  { "p", "print a expr (calculate the figure)", cmd_p},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);//末尾指针

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");//以空格作为分隔符分割
    if (cmd == NULL) { continue; }
	
    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;//strtok原理是把源串作为分割符号的记号替换成\0,args获取命令参数,注意不是一次全部干掉，是调用一次干掉一个分割符号调用一次干掉一个,返回的是原串指针
    if (args >= str_end) {
      args = NULL;//看看有没有到末尾指针，也就是看分割的串有没有漏的,到末尾了就置空,防御性编程
    }//获取命令行参数的循环

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {//判断用户输入命令是否与设置命令一致其实就是看看有没有这个指令有的话就break,没有的话就会一直循环直到末尾，最后检测有没有到末尾判断打印找没找到命令。
        if (cmd_table[i].handler(args) < 0) { return; }//实际函数处理，上面判断找到，顺便看看要不要退出。<0是为q准备的
        break;//如果不是小于0的话那么会结束查询指令循环而不是直接返回值，结束这一轮指令的处理。继续上一个循环，持续不断获取指令.如果小于0那么不处理了，直接退出机器，然后执行主函数的返回看看机器是不是坏的
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
