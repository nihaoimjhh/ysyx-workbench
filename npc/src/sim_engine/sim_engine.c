#include "common.h"
#include "paddr.h"
#include "cpu.h"
extern uint8_t pmem[MSIZE] ;
extern Vysyx_24090003_cpu* top;
extern VerilatedVcdC* tfp;
void display_pmem();
void sim_engine() {
    cpu_exec(-1);
}

void display_pmem() {
    for(int i = 0; i < MSIZE; i++) {
        printf("pmem[%d]:%x\n",i,pmem[i]);
    }
}