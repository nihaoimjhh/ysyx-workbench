#include "common.h"
#include "paddr.h"
#include "cpu.h"
#include "sdb.h"
extern uint8_t pmem[MSIZE] ;
extern Vysyx_24090003_computer* top;
extern VerilatedFstC* tfp;
void display_pmem();
void sim_engine() {
    #ifdef CONFIG_TARGET_AM
    cpu_exec(-1);
    #endif
    sdb_mainloop();
}

void display_pmem() {
    for(int i = 0; i < MSIZE; i++) {
        printf("pmem[%d]:%x\n",i,pmem[i]);
    }
}