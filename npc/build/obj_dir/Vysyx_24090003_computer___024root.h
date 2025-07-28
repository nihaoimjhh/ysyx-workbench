// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24090003_computer.h for the primary calling header

#ifndef VERILATED_VYSYX_24090003_COMPUTER___024ROOT_H_
#define VERILATED_VYSYX_24090003_COMPUTER___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24090003_computer__Syms;
class Vysyx_24090003_computer_adder_32bit;


class Vysyx_24090003_computer___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_24090003_computer_adder_32bit* __PVT__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder;
    Vysyx_24090003_computer_adder_32bit* __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder;
    Vysyx_24090003_computer_adder_32bit* __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub;
    Vysyx_24090003_computer_adder_32bit* __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder;
    Vysyx_24090003_computer_adder_32bit* __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rst_n,0,0);
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en;
        CData/*1:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_jump;
        CData/*3:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op;
        CData/*1:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel;
        CData/*1:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_branch;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_jalr;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_ebreak;
        CData/*2:0*/ ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_overflow;
        CData/*0:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_overflow;
        CData/*6:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigrprev__TOP__i_clk;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ ysyx_24090003_computer__DOT__r_mem_rdata;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_inst;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_op2_not_plus_1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_op2_not_plus_1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4;
        IData/*31:0*/ ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__i;
        IData/*31:0*/ __Vfunc_ysyx_24090003_computer__DOT__cpu_pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__cpu_pmem_read__2__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24090003_computer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24090003_computer___024root(Vysyx_24090003_computer__Syms* symsp, const char* v__name);
    ~Vysyx_24090003_computer___024root();
    VL_UNCOPYABLE(Vysyx_24090003_computer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
