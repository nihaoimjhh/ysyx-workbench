#include "common.h"
#include "paddr.h"
#include "cpu.h"
extern int finish;
extern uint32_t instruction;
extern uint8_t pmem[MSIZE] ;
int instruction_count = 0;
int badmode = 0;
int watchdog = 0;
int finish_simulation(int finish, int wactchdog,Vysyx_24090003_cpu* top, VerilatedVcdC* tfp);
void display_pmem();
int sim_engine() {
    Vysyx_24090003_cpu* top = new Vysyx_24090003_cpu;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sim.vcd");
    top->cpu_clk = 0;
    top->cpu_rs = 1;
    printf("start simulation\n");
    printf("MSIZE:%d\n",MSIZE);
    // display_pmem();
    top->cpu_clk = 0;
    for (int i = 0; i >-1; i++) {
        watchdog++;
        if(watchdog>20){
            finish = 1;
        }
        if(i==0||i==1||i==2||i==3){
            top->cpu_rs = 1;
        }
        else {
            top->cpu_rs = 0;
        }
        top->addr_read_data = paddr_read(top->pc, 4);
        top->cpu_clk = !top->cpu_clk;
        top->addr_read_data = paddr_read(top->pc, 4);
        if(top->addr_read_data==0){
            if(top->pc==0){
                printf("waiting to reset ....\n");
            }
        }
        else {
            watchdog--;
        }
        if(finish_simulation(finish, watchdog,top, tfp)){
            npc_state.state = NPC_END;
            NPCTRAP(top->pc, top->gpr10);
            break;
        }
        instruction_count++;
        
        top->eval();
        tfp->dump(i);
        printf("\n");
    
    }
    switch (npc_state.state) {
            case NPC_END: case NPC_ABORT:
            if(npc_state.state==NPC_ABORT)
                printf("\033[1;31m""ABORT""\033[0m\n");
            else if (npc_state.halt_ret == 0)
                printf("\033[1;32m""HIT GOOD TRAP\n""\033[0m\n");
            else
                printf("\033[1;31m""HIT BAD TRAP\n""\033[0m\n");
                
        }
    return 0;
}
int finish_simulation(int finish,int watchdog, Vysyx_24090003_cpu* top, VerilatedVcdC* tfp) {
    if (finish) {
        if(watchdog>20){
            printf("watchdog timeout\n");
        }
        else {
        printf("ebreak,excute %d instructions\n",instruction_count);
        }
        top->final();
        tfp->close();
        delete top;          
        delete tfp;
        return 1;
    } 
    else {
        return 0;
    }
}
void display_pmem() {
    for(int i = 0; i < MSIZE; i++) {
        printf("pmem[%d]:%x\n",i,pmem[i]);
    }
}