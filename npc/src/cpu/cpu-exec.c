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
int watchdog = 0;
void execute(uint64_t n); 
void exec_once(Decode *s);
void isa_exec_once(Decode *s);
void ifetch(Decode *s);
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
                     if(watchdog>20){
                        printf("\033[1;31m""WATCHDOG""\033[0m\n");
                        }
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
  Decode s;
  for (;n > 0; n --) {//命令执行循环
    exec_once(&s);//真正执行的函数
    trace_and_difftest();//检查是否有监视点
    if (npc_state.state != NPC_RUNNING) {
        if(npc_state.state == NPC_ABORT) {
           break; 
         };//如果状态不是运行状态，那么就是终止状态，那么就打印错误信
      break;
    }//确保机器一直正常运行
  }
}
void exec_once(Decode *s) {
  int i;  
  ifetch(s);
  isa_exec_once(s);//执行命令
  INV(s->pc,s->cpu_inst);
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), "0x%08""x"":", s->pc);
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
}
void isa_exec_once(Decode *s) {
    int i;
    for (i = 0; i < 2; i++) {
        top->cpu_clk = !top->cpu_clk;
        watchdog++;
        top->eval();
        tfp->dump(dump_num++);
        s->cpu_inst = cpu_inst;//其实是上一次的指令，之所以放在这里是因为eval之后inst才会更新，所以不如隔一下，这样能保持pc和inst一致
    }
}
void ifetch(Decode *s) {
    s->pc = top->pc;//最近的pc
    top->addr_read_data = paddr_read(top->pc, 4);
    if(watchdog>20){
      npc_state.state = NPC_ABORT;
    }
    if(top->addr_read_data==0){
      if(top->pc==0){
        printf("waiting to reset ....\n");
      }
    }
    else {
        watchdog--;
    }
}