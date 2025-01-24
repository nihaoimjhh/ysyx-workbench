#include <common.h>
Vysyx_24090003_cpu* top;
VerilatedVcdC* tfp;
uint64_t dump_num = 0;
word_t gpr[16];
void init_sim_engine() {
    int i;
    printf(ANSI_COLOR_GREEN_SMALL "init simulation creat sim object\n" ANSI_COLOR_RESET);
    Verilated::traceEverOn(true);
    top = new Vysyx_24090003_cpu;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    printf("open sim.vcd to dump vcd\n");
    tfp->open("sim.vcd");
    printf(ANSI_COLOR_GREEN_SMALL "init pc \n" ANSI_COLOR_GREEN_SMALL);
    top->cpu_clk = 0;
    for(i=0;i<3;i++){
        top->cpu_clk=!top->cpu_clk;
        top->cpu_rs = 1;
        top->addr_read_data = 0;
        top->eval();
        tfp->dump(dump_num++);
    }
    top->cpu_rs = 0;
    printf(ANSI_COLOR_GREEN_BIG "start simulation\n" ANSI_COLOR_RESET);
}