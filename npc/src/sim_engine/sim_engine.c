#include "common.h"
#include "paddr.h"
extern int finish;
extern uint32_t instruction;
extern uint8_t pmem[MSIZE] ;
int instruction_count = 0;
void finish_simulation(int finish, Vysyx_24090003_cpu* top, VerilatedVcdC* tfp);
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
    for(int i = 0; i < MSIZE; i++) {
        printf("pmem[%d]:%x\n",i,pmem[i]);
    }

    for (int i = 0; i >-1; i++) {
        if(i==0){
            top->cpu_rs = 1;
        }
        else{
            top->cpu_rs = 0;
        }
        top->cpu_clk = !top->cpu_clk;
        if(i%4==1||i%4==2){    
            printf("pc:%x\n",top->pc);

             top->addr_read_data = paddr_read(top->pc, 4);
             if(top->addr_read_data==0)
                break;
        }
        else {
            top->addr_read_data = 0x0;
        }
        if(finish==1){
            finish_simulation(finish, top, tfp);
            break;
        }
        else if(i%4==1){
            instruction_count++;
        }
    
    top->eval();
    tfp->dump(i);
    }
    top->final();
    tfp->close();
    delete top;
    return 0;
}
void finish_simulation(int finish, Vysyx_24090003_cpu* top, VerilatedVcdC* tfp) {
                printf("ebreak,excute %d instructions\n",instruction_count);
                 top->final();
                 // Close trace file
                tfp->close();
                // Cleanup
                delete top;
    
}
