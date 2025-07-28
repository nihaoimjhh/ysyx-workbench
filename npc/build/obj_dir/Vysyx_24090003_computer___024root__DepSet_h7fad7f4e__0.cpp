// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer___024root.h"

void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(CData/*7:0*/ flag, CData/*7:0*/ rst);
void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__finish_simulation_TOP();

VL_INLINE_OPT void Vysyx_24090003_computer___024root___ico_sequent__TOP__0(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void Vysyx_24090003_computer___024root___eval_act(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_act\n"); );
}

void Vysyx_24090003_computer___024root___eval_triggers__ico(Vysyx_24090003_computer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__ico(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24090003_computer___024root___eval_ico(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer___024root___eval_triggers__act(Vysyx_24090003_computer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__act(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__nba(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24090003_computer___024root___eval_nba(Vysyx_24090003_computer___024root* vlSelf);

void Vysyx_24090003_computer___024root___eval(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_24090003_computer___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090003_computer___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_computer.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_24090003_computer___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24090003_computer___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24090003_computer___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_computer.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24090003_computer___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090003_computer___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu_v/ysyx_24090003_computer.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24090003_computer___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24090003_computer___024root___eval_debug_assertions(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_rst_n & 0xfeU))) {
        Verilated::overWidthError("i_rst_n");}
}
#endif  // VL_DEBUG
