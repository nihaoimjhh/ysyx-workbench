#include <common.h>
Vysyx_24090003_cpu* top;
VerilatedVcdC* tfp;
uint64_t dump_num = 0;
word_t gpr[16];
void init_sim_engine() {
    int i;
    printf("init simulation\n");
    Verilated::traceEverOn(true);
    top = new Vysyx_24090003_cpu;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sim.vcd");
    top->cpu_rs = 1;
    top->cpu_clk = 0;
    for(i=0;i<3;i++){
        top->cpu_clk=!top->cpu_clk;
        top->eval();
        tfp->dump(dump_num++);
    }
    top->cpu_clk = 0;
    top->cpu_rs = 0;
    printf("start simulation\n");
}