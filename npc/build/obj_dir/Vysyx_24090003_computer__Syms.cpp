// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_24090003_computer__Syms.h"
#include "Vysyx_24090003_computer.h"
#include "Vysyx_24090003_computer___024root.h"
#include "Vysyx_24090003_computer_adder_32bit.h"

// FUNCTIONS
Vysyx_24090003_computer__Syms::~Vysyx_24090003_computer__Syms()
{
}

Vysyx_24090003_computer__Syms::Vysyx_24090003_computer__Syms(VerilatedContext* contextp, const char* namep, Vysyx_24090003_computer* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder{this, Verilated::catName(namep, "ysyx_24090003_computer.cpu.exu.alu_inst.adder")}
    , TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub{this, Verilated::catName(namep, "ysyx_24090003_computer.cpu.exu.alu_inst.adder_sub")}
    , TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder{this, Verilated::catName(namep, "ysyx_24090003_computer.cpu.exu.pc_alu_inst.adder")}
    , TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub{this, Verilated::catName(namep, "ysyx_24090003_computer.cpu.exu.pc_alu_inst.adder_sub")}
    , TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder{this, Verilated::catName(namep, "ysyx_24090003_computer.cpu.ifu.pc_plus4_adder")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder = &TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder;
    TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub = &TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub;
    TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder = &TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder;
    TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub = &TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub;
    TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder = &TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vconfigure(true);
    TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vconfigure(false);
    TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vconfigure(false);
    TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vconfigure(false);
    TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__Vconfigure(false);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
