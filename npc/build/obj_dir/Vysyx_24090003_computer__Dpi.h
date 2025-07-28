// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24090003_COMPUTER__DPI_H_
#define VERILATED_VYSYX_24090003_COMPUTER__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_computer.v:9:33
    extern int cpu_pmem_read(int addr);
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_computer.v:10:34
    extern void cpu_pmem_write(int addr, int data, char wmask);
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_EXU.v:28:34
    extern void finish_simulation();
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_IDU.v:34:32
    extern void inst_not_found(char flag, char rst);
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_IFU.v:32:34
    extern void set_dnpc(int value);
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_RegFile.v:24:34
    extern void set_gpr(int index, int value);
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_IFU.v:29:34
    extern void set_inst(int value);
    // DPI import at /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_IFU.v:31:34
    extern void set_pc(int value);

#ifdef __cplusplus
}
#endif

#endif  // guard
