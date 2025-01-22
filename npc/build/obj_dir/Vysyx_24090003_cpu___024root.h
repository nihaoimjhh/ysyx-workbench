// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24090003_cpu.h for the primary calling header

#ifndef VERILATED_VYSYX_24090003_CPU___024ROOT_H_
#define VERILATED_VYSYX_24090003_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24090003_cpu__Syms;

class Vysyx_24090003_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cpu_clk,0,0);
    VL_IN8(cpu_rs,0,0);
    VL_OUT8(addr_write_enable,0,0);
    CData/*2:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_IDU__DOT__ysyx_24090003_immT__DOT__Itype;
    CData/*2:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control;
    CData/*0:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r;
    CData/*3:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__EXrd_r;
    CData/*0:0*/ __Vtrigrprev__TOP__cpu_clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(addr_read_data,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(addr_write_data,31,0);
    VL_OUT(EXaddr,31,0);
    IData/*31:0*/ ysyx_24090003_cpu__DOT__imm;
    IData/*31:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r;
    IData/*31:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r;
    IData/*31:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__operand1_r;
    IData/*31:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__operand2_r;
    IData/*31:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_r;
    IData/*31:0*/ ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_result;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__gpr;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24090003_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24090003_cpu___024root(Vysyx_24090003_cpu__Syms* symsp, const char* v__name);
    ~Vysyx_24090003_cpu___024root();
    VL_UNCOPYABLE(Vysyx_24090003_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
