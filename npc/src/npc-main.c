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
#include <sim_engine.h>
#include <cpu.h>
#include <monitor/monitor.h>
#include "decode.h"
extern NPCState npc_state;
extern word_t gpr[16];
extern Decode s;
extern Vysyx_24090003_cpu* top;
extern VerilatedVcdC* tfp;
extern "C" void finish_simulation() {
    Verilated::gotFinish(true);
    npc_state.state = NPC_END;
    NPCTRAP(top->pc,gpr[10] );
    top->final();
    tfp->close();
    //cpu要top->eval();还要dump，直接删了会导致报错，并且无法用finish判断有点奇怪
}
extern "C" void set_gpr(int index, word_t value) {
    if (index >= 0 && index < 16) {
        gpr[index] = value;
    }
}
extern "C" void set_inst(word_t value) {
        s.cpu_inst = value;
}
extern "C" int cpu_pmem_read(paddr_t addr) {
        return pmem_read(addr, 4);
}
extern "C" void cpu_pmem_write(paddr_t addr, word_t data, char mask) {
       if(mask==0xf)
            pmem_write(addr, data, 4);
       else if(mask==0x3)
            pmem_write(addr, data, 2);
       else if(mask==0x1)
            pmem_write(addr, data, 1);
       else{
            printf("mask error\n");
            npc_state.state = NPC_ABORT;
       }
}
int main(int argc, char *argv[]) {
  init_monitor(argc, argv);
  init_sim_engine();
  sim_engine();
  return 0;
}

