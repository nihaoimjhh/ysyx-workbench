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
	//nemu_state.state=NEMU_RUNNING;//cpu_exec里面有了,放了重复会报错，现在不知道为啥
	if(args==NULL){
		 n=1;//默认1
	 }
	else{
    sscanf(args,"%lu",&n);
	 }
    cpu_exec(n);
    //nemu_state.state=NEMU_STOP;cpu_exec里面有了
	
  return 0;//
}
static int cmd_info(char *args) {
	 if(args==NULL) {printf("please enter r or w.\ninfo r is print regs and infor w is print watchpoints.\n"); return 0;}
	 if(strcmp(args,"r")==0){
		 isa_reg_display();
	} 
	 else if(strcmp(args,"w")==0){
		 wp_print();
	 }
	 else {
		 printf("plase enter the right choice r(regs) or w(watchpoints)\n"); 
	 }
  return 0;
}
static int cmd_x(char *args){
	 bool success=true;
	 if(args==NULL) {printf("Please enter the number N to be printed and which address EXPR\nexample: x 10 0x80000000 or x 10 $reg\n"); return 0;}
	 char *args1=NULL,*args2=NULL;
	 int N,i;
	 word_t result;
	 vaddr_t addr;//相当于uint32_t
	 args1=strtok(NULL," ");
	 args2=strtok(NULL," ");
	 if(args1==NULL){printf("Please enter the number N to be printed\n");return 0;}
	 if(args2==NULL){printf("Please enter the address or EXPR\n");return 0;}
	 if(sscanf(args1,"%d",&N)<=0){printf("Please enter the number N to be printed\n");return 0;} 
	 addr=expr(args2,&success);
	 if(addr<0x80000000||addr>0x87ffffff){
		 printf("Invalid memory address:Hexadecimal:%#x  decimal:%u\taddr hould in [0x80000000,0x87ffffff]\n",addr,addr);
		 return 0;
	 }
	 if(!success){
		 printf("Some errors have occurred Please enter the correct expression\n"); return 0;}
	 else{
		 result=vaddr_read(addr,4);
		 for(i=0;i<N;i++){
			 printf("%#x\t%u\n",addr,result);
			 addr+=4;
		 }
	 }
	 return 0;
}
static int cmd_p(char *args){
	 if(args==NULL) {printf("Please enter your expression\n");return 0;}
	 bool success= true;
	 word_t ans;
	 ans=expr(args,&success);
	 if(success){
		 printf("ans:\tdecimal:%u\tHexadecimal:%#x\n",ans,ans);//ans测试
	 }
	 else{
		 printf("Something went wrong Please check your expression\n");
	 }
	 return 0;
}
static int cmd_w(char *args){//args==expr
	 if(args==NULL) {printf("Please enter the expression you want to monitor\n");return 0;}
	 bool success=true;
	 word_t ans;
	 ans=expr(args,&success);//先算值
	 if(success){
		 wp_creat(args,ans,&success);//存值
		 if(!success)
			 printf("An error occurred creating a watch point\n");
	 }
	 else{
		 printf("Something went wrong Please check your expression\n");
	 }
	 return 0;
}
static int cmd_d(char *args){//args==N no.N
	 if(args==NULL) printf("Please enter the serial number you want to delete or enter (d all) to delete all watchpoints\n");
	 else{
	 wp_remove(args);
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
  { "info", "info r or w :info r(regs) or info w(watchpoints)", cmd_info },
  { "x", "x N adress(0x80000000): examine mem", cmd_x},
  { "p", "p expr :print a expr (calculate the figure)", cmd_p},
  { "w", "w expr :watch a expr and creat a watch points", cmd_w},
  { "d", "d N :delete a watchpoint", cmd_d},

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
  char last_cmd[20] = {};
  char last_args[20] = {};
  char *args = NULL;
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);//末尾指针

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");//以空格作为分隔符分割
    if (cmd == NULL) { 
      if(last_cmd[0] != 0) {
        cmd = last_cmd;
        if(last_args[0] != 0)
          args = last_args;
        else{
          args = NULL;
        }    
        printf("last_cmd:%s\n",last_cmd);
        printf("last_args:%s\n",last_args);
      }
      else
        continue;
      } 
    else {   
      args = cmd + strlen(cmd) + 1;//strtok原理是把源串作为分割符号的记号替换成\0,args获取命令参数,注意不是一次全部干掉，是调用一次干掉一个分割符号调用一次干掉一个,返回的是原串指针
      if (args >= str_end) {
        args = NULL;//看看有没有到末尾指针，也就是看分割的串有没有漏的,到末尾了就置空,防御性编程
      }//获取命令行参数的循环
     }
      

	
    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
  

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {//判断用户输入命令是否与设置命令一致其实就是看看有没有这个指令有的话就break,没有的话就会一直循环直到末尾，最后检测有没有到末尾判断打印找没找到命令。
        if (cmd_table[i].handler(args) < 0) { return; }//实际函数处理，上面判断找到，顺便看看要不要退出。<0是为q准备的
        if (cmd!=NULL) strcpy(last_cmd, cmd);//如果不是空的话那么就把这次的命令赋值给上一次的命令
        if (args!=NULL) strcpy(last_args, args);
        else last_args[0] = 0;
       
        
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
