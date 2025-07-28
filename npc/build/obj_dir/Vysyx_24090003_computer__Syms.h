// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_24090003_COMPUTER__SYMS_H_
#define VERILATED_VYSYX_24090003_COMPUTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_24090003_computer.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_24090003_computer___024root.h"
#include "Vysyx_24090003_computer_adder_32bit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vysyx_24090003_computer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_24090003_computer* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_24090003_computer___024root TOP;
    Vysyx_24090003_computer_adder_32bit TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder;
    Vysyx_24090003_computer_adder_32bit TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub;
    Vysyx_24090003_computer_adder_32bit TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder;
    Vysyx_24090003_computer_adder_32bit TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub;
    Vysyx_24090003_computer_adder_32bit TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder;

    // CONSTRUCTORS
    Vysyx_24090003_computer__Syms(VerilatedContext* contextp, const char* namep, Vysyx_24090003_computer* modelp);
    ~Vysyx_24090003_computer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
