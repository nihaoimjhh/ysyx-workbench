// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer__Syms.h"
#include "Vysyx_24090003_computer_adder_32bit.h"

void Vysyx_24090003_computer_adder_32bit___ctor_var_reset(Vysyx_24090003_computer_adder_32bit* vlSelf);

Vysyx_24090003_computer_adder_32bit::Vysyx_24090003_computer_adder_32bit(Vysyx_24090003_computer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_24090003_computer_adder_32bit___ctor_var_reset(this);
}

void Vysyx_24090003_computer_adder_32bit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_24090003_computer_adder_32bit::~Vysyx_24090003_computer_adder_32bit() {
}
