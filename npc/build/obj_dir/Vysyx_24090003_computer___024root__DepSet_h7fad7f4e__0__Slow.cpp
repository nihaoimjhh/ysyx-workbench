// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer___024root.h"

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_static(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_final(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_triggers__stl(Vysyx_24090003_computer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__stl(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_stl(Vysyx_24090003_computer___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_settle(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24090003_computer___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090003_computer___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_computer.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24090003_computer___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__stl(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_pc_TOP(IData/*31:0*/ value);
void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(IData/*31:0*/ index, IData/*31:0*/ value);
void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &cpu_pmem_read__Vfuncrtn);
void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_inst_TOP(IData/*31:0*/ value);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24090003_computer__ConstPool__TABLE_h0800e15e_0;
void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(CData/*7:0*/ flag, CData/*7:0*/ rst);
void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__finish_simulation_TOP();

VL_ATTR_COLD void Vysyx_24090003_computer___024root___stl_sequent__TOP__0(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_pc_TOP(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(1U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [1U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(2U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [2U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(3U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [3U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(4U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [4U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(5U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [5U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(6U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [6U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(7U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [7U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(8U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [8U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(9U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [9U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0xaU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0xaU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0xbU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0xbU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0xcU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0xcU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0xdU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0xdU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0xeU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0xeU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0xfU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0xfU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x10U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x10U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x11U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x11U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x12U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x12U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x13U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x13U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x14U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x14U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x15U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x15U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x16U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x16U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x17U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x17U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x18U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x18U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x19U, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x19U]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x1aU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x1aU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x1bU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x1bU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x1cU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x1cU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x1dU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x1dU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x1eU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x1eU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(0x1fU, 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [0x1fU]);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_read_TOP(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc, vlSelf->__Vfunc_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__cpu_pmem_read__2__Vfuncout);
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
        = vlSelf->__Vfunc_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__cpu_pmem_read__2__Vfuncout;
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_inst_TOP(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst);
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data 
        = ((0U == (0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                            >> 0xfU))) ? 0U : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
           [(0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                      >> 0xfU))]);
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst);
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type 
        = Vysyx_24090003_computer__ConstPool__TABLE_h0800e15e_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_ebreak = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 2U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
    if ((0x40U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
        if ((0x20U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            if ((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                } else if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                } else if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_ebreak = 1U;
                    } else {
                        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                    }
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump = 1U;
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 1U;
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
                        } else {
                            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                        }
                    } else {
                        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                    }
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump = 1U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr = 1U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
                    } else {
                        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                    }
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch = 1U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 0U;
                    if ((0x4000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op 
                            = ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                ? 9U : 8U);
                    } else if ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 1U;
                    } else {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 1U;
                    }
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else {
                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            }
        } else {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        }
    } else if ((0x20U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
        if ((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            } else if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 2U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0xaU;
                    } else {
                        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                    }
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 0U;
                    if ((0x4000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        if ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                            if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                                if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 2U;
                                } else {
                                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 2U;
                                }
                            } else if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                               >> 0x19U))) {
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 3U;
                            } else {
                                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 3U;
                            }
                        } else if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                            if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                        >> 0x19U))) {
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 6U;
                            } else if ((0x20U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 7U;
                            } else {
                                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 6U;
                            }
                        } else if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                           >> 0x19U))) {
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 4U;
                        } else {
                            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 4U;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                            if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                        >> 0x19U))) {
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 9U;
                            } else {
                                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 9U;
                            }
                        } else if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                           >> 0x19U))) {
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 8U;
                        } else {
                            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 8U;
                        }
                    } else if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                        if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                    >> 0x19U))) {
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 5U;
                        } else {
                            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 5U;
                        }
                    } else if ((0U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                       >> 0x19U))) {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
                    } else if ((0x20U == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                          >> 0x19U))) {
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 1U;
                    } else {
                        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
                    }
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else {
                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            }
        } else if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        } else if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        } else if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 1U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 1U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
                if ((0U == (7U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                  >> 0xcU)))) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 0U;
                } else if ((1U == (7U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                         >> 0xcU)))) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 1U;
                } else if ((2U == (7U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                         >> 0xcU)))) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 2U;
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 2U;
                }
            } else {
                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            }
        } else {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        }
    } else if ((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
        if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        } else if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 1U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
                } else {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
                }
            } else {
                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            }
        } else if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op 
                    = ((0x4000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                        ? ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                            ? ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                ? 2U : 3U) : ((0x1000U 
                                               & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                               ? ((0x40000000U 
                                                   & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                                   ? 7U
                                                   : 6U)
                                               : 4U))
                        : ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                            ? ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                ? 9U : 8U) : ((0x1000U 
                                               & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                               ? 5U
                                               : 0U)));
            } else {
                Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            }
        } else {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        }
    } else if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
    } else if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
    } else if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
        if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 1U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 1U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg = 1U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 1U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0U;
            if ((0x4000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 2U;
                } else if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 1U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 1U;
                } else {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 0U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 1U;
                }
            } else if ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 2U;
                } else {
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 2U;
                    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 0U;
                }
            } else if ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)) {
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 1U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 0U;
            } else {
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 0U;
                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 0U;
            }
        } else {
            Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
            vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
        }
    } else {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(0xffU, 
                                                                                (0xffU 
                                                                                & (- (IData)((IData)(vlSelf->i_rst_n)))));
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0U;
    }
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out 
        = ((4U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
            ? ((2U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
                ? ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
                    ? 1U : 0U) : ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
                                   ? (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                   >> 0x1fU))) 
                                       << 0x14U) | 
                                      ((0xff000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst) 
                                       | ((0x800U & 
                                           (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                >> 0x14U)))))
                                   : (0xfffff000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)))
            : ((2U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
                ? ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
                    ? (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                      >> 7U)))))
                    : (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                      >> 7U)))))
                : ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type))
                    ? (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                          >> 0x14U)) : 1U)));
    if (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_ebreak) {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__finish_simulation_TOP();
    }
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
        = ((0U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel))
            ? vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data
            : ((1U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel))
                ? vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc
                : ((2U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel))
                    ? 0U : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data)));
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
        = ((0U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel))
            ? ((0U == (0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                >> 0x14U))) ? 0U : 
               vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
               [(0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                          >> 0x14U))]) : ((1U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel))
                                           ? vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out
                                           : ((2U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel))
                                               ? 4U
                                               : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out)));
    if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
               << 1U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
               >> 1U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1 
            = ((0x80000000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1) 
               | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 1U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1;
    }
    if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1 
               << 2U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1 
               >> 2U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2 
            = (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                            >> 0x1fU))) << 0x1eU) | 
               (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1 
                >> 2U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1;
    }
    if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2 
               << 4U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2 
               >> 4U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3 
            = (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                            >> 0x1fU))) << 0x1cU) | 
               (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2 
                >> 4U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2;
    }
    if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3 
               << 8U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3 
               >> 8U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4 
            = (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                            >> 0x1fU))) << 0x18U) | 
               (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3 
                >> 8U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__ico(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__act(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__nba(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090003_computer___024root___ctor_var_reset(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = 0;
    vlSelf->i_rst_n = 0;
    vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_ebreak = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_overflow = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_op2_not_plus_1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_overflow = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_op2_not_plus_1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3 = 0;
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[__Vi0] = 0;
    }
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__i = 0;
    vlSelf->__Vfunc_ysyx_24090003_computer__DOT__cpu_pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__cpu_pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__i_clk = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
