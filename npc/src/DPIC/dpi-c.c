#include <common.h>
#include <cpu.h>
#include "decode.h"
#include "paddr.h"
extern NPCState npc_state;
extern word_t gpr[16];
extern Decode s;
extern Vysyx_24090003_cpu* top;
extern VerilatedVcdC* tfp;
extern "C" void finish_simulation() {
    Verilated::gotFinish(true);
    npc_state.state = NPC_END;
    NPCTRAP(s.pc,gpr[10] );
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
extern "C" void set_pc(vaddr_t value) {
        s.pc = value;
}
extern "C" void set_dnpc(vaddr_t value) {
        s.dnpc = value;
}
extern "C" int cpu_pmem_read(paddr_t addr) {
        return paddr_read(addr, 4);
}
extern "C" void cpu_pmem_write(paddr_t addr, word_t data, uint8_t wmask) {
       if(wmask==0xf){
            paddr_write(addr, data, 4);
       }
       else if(wmask==0x3)
            paddr_write(addr, data, 2);
       else if(wmask==0x1)
            paddr_write(addr, data, 1);
       else if(wmask==0x0){
            return;
       }
       else{
          
            printf("mask error %x\n",wmask);
            npc_state.state = NPC_ABORT;
       }
}
