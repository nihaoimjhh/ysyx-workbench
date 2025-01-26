/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NPC is licensed under Mulan PSL v2.
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
#include "cpu.h"
#include "common.h"
#include "paddr.h"
#include "sdb.h"
#include "locale.h"
#include "decode.h"
#include "reg.h"
#include "get_elf.h"
#include "iringbuf.h"
#ifdef __cplusplus
extern "C" {
#endif

void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#ifdef __cplusplus
}
#endif

extern NPCState npc_state;
extern int dump_num;
extern Vysyx_24090003_cpu* top;
extern VerilatedVcdC* tfp;
extern word_t gpr[16];
extern word_t cpu_inst;
int instruction_count = 0;
Decode s;//主体逻辑规定我的这个结构体只能放在这里不能像nemu一样放在执行里面，那样会有问题


//函数需要的全局变量，用来打印函数名字，monitor.c里面的elf_file传进来
 extern   Elf32_Ehdr ehdr;
 extern   Elf32_Shdr *shdr_pointer;
 extern   char *strtab;
 extern   char *shstrtab;
 extern   int symlens;
 extern   int symtab_index;
 extern   int strtab_index;
 extern   Elf32_Sym *symtab_pointer;
 int call_count=0;
//函数需要的全局变量，用来打印函数名字，monitor.c里面的elf_file传进来









uint64_t g_nr_guest_inst = 0;
void execute(uint64_t n); 
void exec_once(Decode *s);
void isa_exec_once(Decode *s);
static void trace_and_difftest(){
          if(wp_check()){
            npc_state.state = NPC_STOP;
          }
}//每次执行是运行cpu_excute,齐调用excute为核心函数，里面有trace，所以说每次执行较少步骤时候，每一次cpu执行该函数会执行,wp_check放这里再合适不过了
void cpu_exec(uint64_t n) {//里面有execute
      switch (npc_state.state) {
            case NPC_END: case NPC_ABORT://机器终止或者运行结束则打印提示信息
                printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
                return;//看有没有正确运行，坏了就直接返回。
            default: npc_state.state = NPC_RUNNING;//如果不是上述条件那么状态就是润状态
      }
      execute(n);//执行命令
      switch (npc_state.state) {
              case NPC_RUNNING: 
                  npc_state.state = NPC_STOP; 
                  break;//搞完了就stop,这样就能停下来le
              case NPC_END: 
              case NPC_ABORT:
                  if(npc_state.state==NPC_ABORT){
                      printf("\033[1;31m""ABORT""\033[0m\n");
                  }
                  else if (npc_state.halt_ret == 0){
                      printf("\033[1;32m""HIT GOOD TRAP""\033[0m");
                      printf("   at pc:%x\n",npc_state.halt_pc);
                 }
                  else{
                    printf("\033[1;31m""HIT BAD TRAP""\033[0m");
                    printf("   at pc:%x\n",npc_state.halt_pc);
                  }
      }
}
void execute(uint64_t n) {//cpu执行的核心函数
  char irb[11][128];
  int last_count=0;
  for (;n > 0; n --) {//命令执行循环
    exec_once(&s);//真正执行的函数
    g_nr_guest_inst ++;
    last_count=iringbufmanage(irb,g_nr_guest_inst,&s);
    trace_and_difftest();//检查是否有监视点
    if (npc_state.state != NPC_RUNNING) {
        if(npc_state.state == NPC_ABORT) {
           iringbufprint(irb,last_count);
           break; 
         };//如果状态不是运行状态，那么就是终止状态，那么就打印错误信
      break;
    }//确保机器一直正常运行
  }
}
void exec_once(Decode *s) {
  int i;  
  inst_print_funcname(shdr_pointer,strtab,symtab_pointer,s->cpu_inst, s->dnpc, s->pc,symlens,&call_count);
  INV(s->pc,s->cpu_inst);
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), "0x%08""x"":", s->pc);//直接看宏展开看的照着抄
  int ilen = 4;
  uint8_t *inst = (uint8_t *)&s->cpu_inst;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;

  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,s->pc, (uint8_t *)&s->cpu_inst, ilen);//为什么非得用cpu_inst,inst不行吗?事实证明不行，不知道为啥
  instruction_count++;
  printf("%s\n",s->logbuf);
  isa_exec_once(s);//执行命令,前面已经取到了命令，但是没有执行，这里执行。如果把这个放在前面那么执行了之后就是下一个pc和dnpc和inst了，因为是组合逻辑，所以这里执行。
}
void isa_exec_once(Decode *s) {
    int i;
    for (i = 0; i < 2; i++) {
        top->cpu_clk = !top->cpu_clk;
        top->eval();
        tfp->dump(dump_num++);
    }
}
