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
extern NPCState npc_state;
extern int dump_num;
extern Vysyx_24090003_cpu* top;
extern VerilatedVcdC* tfp;
int instruction_count = 0;
int watchdog = 0;
void execute(uint64_t n); 
void exec_once();
void isa_exec_once();

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
  for (;n > 0; n --) {//命令执行循环
    exec_once();//真正执行的函数
    if (npc_state.state != NPC_RUNNING) {
        if(npc_state.state == NPC_ABORT) {
           break; 
         };//如果状态不是运行状态，那么就是终止状态，那么就打印错误信
      break;
    }//确保机器一直正常运行
  }
}
void exec_once() {
  isa_exec_once();//执行命令
}
void isa_exec_once(){
        int i;
    for (i = 0; i < 10; i++) {
        top->cpu_clk = !top->cpu_clk;
        watchdog++;
        if(watchdog>20){
             npc_state.state = NPC_ABORT;
        }
        top->addr_read_data = paddr_read(top->pc, 4);
        if(top->addr_read_data==0){
            if(top->pc==0){
                printf("waiting to reset ....\n");
            }
        }
        else {
            watchdog--;
        }
        instruction_count++;
        top->eval();
        tfp->dump(dump_num++);
        
        printf("\n");
    }
}