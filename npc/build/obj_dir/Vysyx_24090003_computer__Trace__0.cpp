// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_24090003_computer__Syms.h"


void Vysyx_24090003_computer___024root__trace_chg_sub_0(Vysyx_24090003_computer___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_24090003_computer___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24090003_computer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090003_computer___024root*>(voidSelf);
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24090003_computer___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24090003_computer___024root__trace_chg_sub_0(Vysyx_24090003_computer___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+2,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result),32);
        bufp->chgBit(oldp+3,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en));
        bufp->chgCData(oldp+5,(((0U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                 ? 1U : ((1U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                          ? 2U : 4U))),3);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata),32);
        bufp->chgIData(oldp+7,(((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr)
                                 ? (0xfffffffeU & vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum)
                                 : vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum)),32);
        bufp->chgBit(oldp+8,(((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump) 
                              | ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken) 
                                 & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch)))));
        bufp->chgCData(oldp+9,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width),2);
        bufp->chgBit(oldp+10,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned));
        bufp->chgBit(oldp+11,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen));
        bufp->chgBit(oldp+12,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump));
        bufp->chgCData(oldp+14,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op),4);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src1_sel),2);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_src2_sel),2);
        bufp->chgBit(oldp+17,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_ebreak));
        bufp->chgIData(oldp+20,(((0U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                  ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned)
                                      ? (0xffU & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)
                                      : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)))
                                  : ((1U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                      ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned)
                                          ? (0xffffU 
                                             & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)))
                                      : vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata))),32);
        bufp->chgIData(oldp+21,(((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump)
                                  ? ((IData)(4U) + vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc)
                                  : ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg)
                                      ? ((0U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                          ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned)
                                              ? (0xffU 
                                                 & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)))
                                          : ((1U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                              ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned)
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)))
                                              : vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata))
                                      : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result))),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2),32);
        bufp->chgBit(oldp+24,((0U == vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result)));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken));
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum),32);
        bufp->chgIData(oldp+29,((((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                      & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                                  << 0x1fU) | ((0x40000000U 
                                                & ((~ 
                                                    ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                                     & (~ 
                                                        ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))) 
                                                   << 0x1eU)) 
                                               | ((0x20000000U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                                        & (~ 
                                                           ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))) 
                                                      << 0x1dU)) 
                                                  | ((0x10000000U 
                                                      & ((~ 
                                                          ((~ 
                                                            ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                                           & (~ 
                                                              ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))) 
                                                         << 0x1cU)) 
                                                     | ((0x8000000U 
                                                         & ((~ 
                                                             ((~ 
                                                               ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                                              & (~ 
                                                                 ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                                  & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))) 
                                                            << 0x1bU)) 
                                                        | ((0x4000000U 
                                                            & ((~ 
                                                                ((~ 
                                                                  ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                                   & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                                     & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))) 
                                                               << 0x1aU)) 
                                                           | ((0x2000000U 
                                                               & ((~ 
                                                                   ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                                      & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                                                    & (~ 
                                                                       ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                                        & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))) 
                                                                  << 0x19U)) 
                                                              | ((0x1000000U 
                                                                  & ((~ 
                                                                      ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                                           & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))) 
                                                                     << 0x18U)) 
                                                                 | ((0x800000U 
                                                                     & ((~ 
                                                                         ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))) 
                                                                        << 0x17U)) 
                                                                    | ((0x400000U 
                                                                        & ((~ 
                                                                            ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                                                             & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))) 
                                                                           << 0x16U)) 
                                                                       | ((0x200000U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))) 
                                                                              << 0x15U)) 
                                                                          | ((0x100000U 
                                                                              & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))) 
                                                                                << 0x14U)) 
                                                                             | ((0x80000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))))))))))))))))))))))))))))))))))),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.sum),32);
        bufp->chgBit(oldp+31,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                        & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))))));
        bufp->chgIData(oldp+32,(((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                                  ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4 
                                     << 0x10U) : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4)),32);
        bufp->chgIData(oldp+33,(((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                                  ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4 
                                     >> 0x10U) : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4)),32);
        bufp->chgIData(oldp+34,(((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                                  ? (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                                  >> 0x1fU))) 
                                      << 0x10U) | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4 
                                                   >> 0x10U))
                                  : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4)),32);
        bufp->chgBit(oldp+35,((1U & (((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                       >> 0x1fU) == 
                                      (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                       >> 0x1fU)) ? 
                                     (vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.sum 
                                      >> 0x1fU) : (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+36,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                               < vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)));
        bufp->chgIData(oldp+37,((~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level1),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level2),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level3),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level1),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level2),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level3),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4),32);
        bufp->chgBit(oldp+46,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                               >> 0x1fU)));
        bufp->chgIData(oldp+47,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level1),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level2),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level3),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4),32);
        bufp->chgBit(oldp+51,((0U == vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum)));
        bufp->chgIData(oldp+52,((((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                      & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                                  << 0x1fU) | ((0x40000000U 
                                                & ((~ 
                                                    ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                                     & (~ 
                                                        ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))) 
                                                   << 0x1eU)) 
                                               | ((0x20000000U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                                        & (~ 
                                                           ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))) 
                                                      << 0x1dU)) 
                                                  | ((0x10000000U 
                                                      & ((~ 
                                                          ((~ 
                                                            ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                                           & (~ 
                                                              ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))) 
                                                         << 0x1cU)) 
                                                     | ((0x8000000U 
                                                         & ((~ 
                                                             ((~ 
                                                               ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                                              & (~ 
                                                                 ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                                  & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))) 
                                                            << 0x1bU)) 
                                                        | ((0x4000000U 
                                                            & ((~ 
                                                                ((~ 
                                                                  ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                                   & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                                     & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))) 
                                                               << 0x1aU)) 
                                                           | ((0x2000000U 
                                                               & ((~ 
                                                                   ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                                      & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                                                    & (~ 
                                                                       ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                                        & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))) 
                                                                  << 0x19U)) 
                                                              | ((0x1000000U 
                                                                  & ((~ 
                                                                      ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                                           & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))) 
                                                                     << 0x18U)) 
                                                                 | ((0x800000U 
                                                                     & ((~ 
                                                                         ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))) 
                                                                        << 0x17U)) 
                                                                    | ((0x400000U 
                                                                        & ((~ 
                                                                            ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                                                             & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))) 
                                                                           << 0x16U)) 
                                                                       | ((0x200000U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))) 
                                                                              << 0x15U)) 
                                                                          | ((0x100000U 
                                                                              & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))) 
                                                                                << 0x14U)) 
                                                                             | ((0x80000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1))))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+53,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                        & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))))));
        bufp->chgIData(oldp+54,(((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)
                                  ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4 
                                     << 0x10U) : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4)),32);
        bufp->chgIData(oldp+55,(((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)
                                  ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4 
                                     >> 0x10U) : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4)),32);
        bufp->chgIData(oldp+56,(((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)
                                  ? (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                                  >> 0x1fU))) 
                                      << 0x10U) | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4 
                                                   >> 0x10U))
                                  : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4)),32);
        bufp->chgBit(oldp+57,((1U & (((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x1fU) == 
                                      (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x1fU)) ? 
                                     (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin)))))
                                      : (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+58,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                               < vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)));
        bufp->chgIData(oldp+59,((~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4),32);
        bufp->chgBit(oldp+68,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                               >> 0x1fU)));
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4),32);
        bufp->chgQData(oldp+73,((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                                       & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1) 
                                                                                << 1U))))))))))))))))))))))))))))))))))),33);
        bufp->chgBit(oldp+75,((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)));
        bufp->chgBit(oldp+76,((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)));
        bufp->chgBit(oldp+77,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                            & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)) 
                                        & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                              & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)))))));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+79,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+80,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                        & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)))));
        bufp->chgBit(oldp+81,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                        & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)))));
        bufp->chgBit(oldp+82,((1U & ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                         & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)) 
                                     & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                           & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))));
        bufp->chgBit(oldp+83,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                     >> 0xaU))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                     >> 0xaU))));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
        bufp->chgBit(oldp+86,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                        & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+91,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+92,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+93,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                        & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                           >> 0xaU))))));
        bufp->chgBit(oldp+94,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                        & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                           >> 0xaU))))));
        bufp->chgBit(oldp+95,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                        & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+96,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                        & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                     >> 0xbU))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                     >> 0xbU))));
        bufp->chgBit(oldp+99,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                        & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+104,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+105,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+106,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+107,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+108,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+109,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0xcU))));
        bufp->chgBit(oldp+111,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0xcU))));
        bufp->chgBit(oldp+112,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+117,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+118,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+119,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+120,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+121,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+122,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0xdU))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0xdU))));
        bufp->chgBit(oldp+125,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+130,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+131,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+132,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+133,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+134,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+135,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0xeU))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0xeU))));
        bufp->chgBit(oldp+138,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+143,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+144,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+145,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+146,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+147,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+148,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+149,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0xfU))));
        bufp->chgBit(oldp+150,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0xfU))));
        bufp->chgBit(oldp+151,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+156,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+157,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+158,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+159,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+160,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+161,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+162,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x10U))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x10U))));
        bufp->chgBit(oldp+164,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+169,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+170,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+171,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+172,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+173,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+174,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+175,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x11U))));
        bufp->chgBit(oldp+176,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x11U))));
        bufp->chgBit(oldp+177,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+182,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+183,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+184,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+185,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+186,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+187,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+188,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x12U))));
        bufp->chgBit(oldp+189,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x12U))));
        bufp->chgBit(oldp+190,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+195,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+196,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+197,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+198,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+199,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+200,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+201,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x13U))));
        bufp->chgBit(oldp+202,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x13U))));
        bufp->chgBit(oldp+203,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+208,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+209,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+210,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+211,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+212,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+213,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+214,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 1U))));
        bufp->chgBit(oldp+215,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 1U))));
        bufp->chgBit(oldp+216,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1))))))));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+221,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+222,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+223,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 1U))))));
        bufp->chgBit(oldp+224,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 1U))))));
        bufp->chgBit(oldp+225,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+226,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1))))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x14U))));
        bufp->chgBit(oldp+228,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x14U))));
        bufp->chgBit(oldp+229,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+235,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+236,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+237,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+238,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+239,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+240,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x15U))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x15U))));
        bufp->chgBit(oldp+242,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+247,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+248,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+249,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+250,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+251,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+252,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+253,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x16U))));
        bufp->chgBit(oldp+254,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x16U))));
        bufp->chgBit(oldp+255,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+260,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+261,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+262,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+263,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+264,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+265,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+266,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x17U))));
        bufp->chgBit(oldp+267,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x17U))));
        bufp->chgBit(oldp+268,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+273,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+274,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+275,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+276,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+277,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+278,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+279,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x18U))));
        bufp->chgBit(oldp+280,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x18U))));
        bufp->chgBit(oldp+281,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+286,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+287,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+288,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+289,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+290,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+291,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x19U))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x19U))));
        bufp->chgBit(oldp+294,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+295,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+299,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+300,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+301,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+302,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+303,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+304,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+305,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+306,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+307,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+312,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+313,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+314,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+315,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+316,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+317,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+318,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+319,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+320,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+325,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+326,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+327,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+328,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+329,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+330,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+331,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+332,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+333,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+338,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+339,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+340,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+341,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+342,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+343,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+344,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+345,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+346,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+351,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+352,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+353,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+354,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+355,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+356,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+357,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 2U))));
        bufp->chgBit(oldp+358,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 2U))));
        bufp->chgBit(oldp+359,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+364,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+365,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+366,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 2U))))));
        bufp->chgBit(oldp+367,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 2U))))));
        bufp->chgBit(oldp+368,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+369,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+371,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+372,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+377,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+378,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+379,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+380,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+381,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+382,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+383,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                >> 0x1fU)));
        bufp->chgBit(oldp+384,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+388,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+389,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+390,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+391,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+392,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+393,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+394,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 3U))));
        bufp->chgBit(oldp+395,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 3U))));
        bufp->chgBit(oldp+396,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+401,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+402,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+403,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 3U))))));
        bufp->chgBit(oldp+404,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 3U))))));
        bufp->chgBit(oldp+405,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+406,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 4U))));
        bufp->chgBit(oldp+408,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 4U))));
        bufp->chgBit(oldp+409,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+414,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+415,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+416,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 4U))))));
        bufp->chgBit(oldp+417,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 4U))))));
        bufp->chgBit(oldp+418,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+419,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+420,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 5U))));
        bufp->chgBit(oldp+421,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 5U))));
        bufp->chgBit(oldp+422,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+427,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+428,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+429,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 5U))))));
        bufp->chgBit(oldp+430,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 5U))))));
        bufp->chgBit(oldp+431,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+432,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+433,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 6U))));
        bufp->chgBit(oldp+434,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 6U))));
        bufp->chgBit(oldp+435,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+440,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+441,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+442,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 6U))))));
        bufp->chgBit(oldp+443,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 6U))))));
        bufp->chgBit(oldp+444,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+445,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+446,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 7U))));
        bufp->chgBit(oldp+447,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 7U))));
        bufp->chgBit(oldp+448,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+453,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+454,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+455,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 7U))))));
        bufp->chgBit(oldp+456,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 7U))))));
        bufp->chgBit(oldp+457,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+458,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+459,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 8U))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 8U))));
        bufp->chgBit(oldp+461,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+465,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+466,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+467,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+468,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 8U))))));
        bufp->chgBit(oldp+469,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 8U))))));
        bufp->chgBit(oldp+470,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+471,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+472,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                      >> 9U))));
        bufp->chgBit(oldp+473,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                      >> 9U))));
        bufp->chgBit(oldp+474,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+478,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+479,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+480,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 9U))))));
        bufp->chgBit(oldp+481,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                            >> 9U))))));
        bufp->chgBit(oldp+482,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+483,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+484,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))))));
        bufp->chgQData(oldp+485,((((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                                        & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (1U 
                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin) 
                                                                    << 0x1fU) 
                                                                   | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin) 
                                                                       << 0x1eU) 
                                                                      | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin) 
                                                                          << 0x1dU) 
                                                                         | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin) 
                                                                             << 0x1cU) 
                                                                            | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin) 
                                                                                << 0x1bU) 
                                                                               | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin) 
                                                                                << 1U)))))))))))))))))))))))))))))))))))),33);
        bufp->chgBit(oldp+487,((1U & (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))));
        bufp->chgBit(oldp+488,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1)))));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+492,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+493,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1)))));
        bufp->chgBit(oldp+494,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                         & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)))));
        bufp->chgBit(oldp+495,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                         & (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))));
        bufp->chgBit(oldp+496,(1U));
        bufp->chgBit(oldp+497,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
        bufp->chgBit(oldp+499,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
        bufp->chgBit(oldp+501,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+504,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+505,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+506,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+507,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xaU)))))));
        bufp->chgBit(oldp+508,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+509,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+510,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+511,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+516,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+517,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+518,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+519,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xbU)))))));
        bufp->chgBit(oldp+520,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+521,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+522,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+523,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+524,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+528,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+529,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+530,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+531,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xcU)))))));
        bufp->chgBit(oldp+532,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+533,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+534,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+535,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+536,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+540,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+541,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+542,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+543,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xdU)))))));
        bufp->chgBit(oldp+544,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+545,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+546,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+547,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+548,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+552,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+553,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+554,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+555,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xeU)))))));
        bufp->chgBit(oldp+556,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+557,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+558,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+559,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+564,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+565,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+566,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+567,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xfU)))))));
        bufp->chgBit(oldp+568,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+569,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+570,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+571,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+575,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+576,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+577,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+578,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+579,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x10U)))))));
        bufp->chgBit(oldp+580,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+581,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+582,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+583,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+588,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+589,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+590,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+591,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x11U)))))));
        bufp->chgBit(oldp+592,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+593,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+594,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+595,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+600,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+601,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+602,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+603,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x12U)))))));
        bufp->chgBit(oldp+604,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+605,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+606,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+607,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+612,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+613,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+614,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+615,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x13U)))))));
        bufp->chgBit(oldp+616,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+617,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+618,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 1U)))));
        bufp->chgBit(oldp+619,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+624,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+625,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+626,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 1U))))));
        bufp->chgBit(oldp+627,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 1U)))))));
        bufp->chgBit(oldp+628,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+629,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+630,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+631,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
        bufp->chgBit(oldp+633,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+636,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+637,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+638,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+639,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x14U)))))));
        bufp->chgBit(oldp+640,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+641,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+642,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+643,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+648,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+649,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+650,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+651,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x15U)))))));
        bufp->chgBit(oldp+652,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+653,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+654,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+655,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+660,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+661,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+662,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+663,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x16U)))))));
        bufp->chgBit(oldp+664,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+665,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+666,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+667,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+672,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+673,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+674,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+675,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x17U)))))));
        bufp->chgBit(oldp+676,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+677,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+678,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+679,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+684,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+685,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+686,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+687,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+688,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+689,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+690,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+691,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+697,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+698,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+699,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+700,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+701,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+702,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+703,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+706,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+708,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+709,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+710,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+711,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x1aU)))))));
        bufp->chgBit(oldp+712,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+713,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+714,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+715,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+720,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+721,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+722,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+723,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x1bU)))))));
        bufp->chgBit(oldp+724,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+725,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+726,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+727,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+731,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+732,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+733,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+734,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+735,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x1cU)))))));
        bufp->chgBit(oldp+736,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+737,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+738,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+739,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+744,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+745,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+746,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+747,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x1dU)))))));
        bufp->chgBit(oldp+748,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+749,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+750,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 2U)))));
        bufp->chgBit(oldp+751,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+756,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+757,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+758,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 2U))))));
        bufp->chgBit(oldp+759,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 2U)))))));
        bufp->chgBit(oldp+760,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+761,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+762,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+763,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+764,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
        bufp->chgBit(oldp+765,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+767,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+768,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+769,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+770,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+771,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x1eU)))))));
        bufp->chgBit(oldp+772,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+773,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+774,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+775,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+779,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+780,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+781,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+782,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0x1fU)))))));
        bufp->chgBit(oldp+783,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+784,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+785,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 3U)))));
        bufp->chgBit(oldp+786,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+791,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+792,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+793,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 3U))))));
        bufp->chgBit(oldp+794,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 3U)))))));
        bufp->chgBit(oldp+795,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+796,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+797,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 4U)))));
        bufp->chgBit(oldp+798,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+803,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+804,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+805,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 4U))))));
        bufp->chgBit(oldp+806,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 4U)))))));
        bufp->chgBit(oldp+807,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+808,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+809,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 5U)))));
        bufp->chgBit(oldp+810,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+815,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+816,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+817,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 5U))))));
        bufp->chgBit(oldp+818,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 5U)))))));
        bufp->chgBit(oldp+819,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+820,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+821,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 6U)))));
        bufp->chgBit(oldp+822,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+826,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+827,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+828,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+829,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 6U))))));
        bufp->chgBit(oldp+830,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 6U)))))));
        bufp->chgBit(oldp+831,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+832,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+833,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 7U)))));
        bufp->chgBit(oldp+834,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+839,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+840,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+841,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 7U))))));
        bufp->chgBit(oldp+842,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 7U)))))));
        bufp->chgBit(oldp+843,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+844,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+845,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 8U)))));
        bufp->chgBit(oldp+846,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+850,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+851,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+852,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+853,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 8U))))));
        bufp->chgBit(oldp+854,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 8U)))))));
        bufp->chgBit(oldp+855,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+856,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+857,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                         >> 9U)))));
        bufp->chgBit(oldp+858,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+862,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+863,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+864,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 9U))))));
        bufp->chgBit(oldp+865,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                         & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 9U)))))));
        bufp->chgBit(oldp+866,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+867,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))));
        bufp->chgQData(oldp+868,((((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                                        & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin) 
                                                                          << 0x1cU) 
                                                                         | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin) 
                                                                             << 0x1bU) 
                                                                            | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin) 
                                                                                << 0x1aU) 
                                                                               | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1) 
                                                                                << 1U))))))))))))))))))))))))))))))))))),33);
        bufp->chgBit(oldp+870,((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)));
        bufp->chgBit(oldp+871,((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)));
        bufp->chgBit(oldp+872,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                             & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                               & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)))))));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+874,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+875,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                         & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)))));
        bufp->chgBit(oldp+876,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                         & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)))));
        bufp->chgBit(oldp+877,((1U & ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                          & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)) 
                                      & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                            & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2))))));
        bufp->chgBit(oldp+878,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0xaU))));
        bufp->chgBit(oldp+879,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0xaU))));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
        bufp->chgBit(oldp+881,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+886,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+887,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+888,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+889,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+890,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+891,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+892,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0xbU))));
        bufp->chgBit(oldp+893,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0xbU))));
        bufp->chgBit(oldp+894,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+897,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+899,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+900,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+901,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+902,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+903,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+904,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+905,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0xcU))));
        bufp->chgBit(oldp+906,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0xcU))));
        bufp->chgBit(oldp+907,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+912,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+913,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+914,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+915,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+916,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+917,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+918,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0xdU))));
        bufp->chgBit(oldp+919,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0xdU))));
        bufp->chgBit(oldp+920,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+921,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
        bufp->chgBit(oldp+922,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+923,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+925,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+926,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+927,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+928,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+929,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+930,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+931,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0xeU))));
        bufp->chgBit(oldp+932,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0xeU))));
        bufp->chgBit(oldp+933,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+937,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+938,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+939,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+940,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+941,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+942,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+943,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+944,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0xfU))));
        bufp->chgBit(oldp+945,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0xfU))));
        bufp->chgBit(oldp+946,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+947,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
        bufp->chgBit(oldp+948,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+949,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+951,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+952,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+953,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+954,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+955,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+956,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+957,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0x10U))));
        bufp->chgBit(oldp+958,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0x10U))));
        bufp->chgBit(oldp+959,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+964,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+965,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+966,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+967,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+968,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+969,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+970,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0x11U))));
        bufp->chgBit(oldp+971,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0x11U))));
        bufp->chgBit(oldp+972,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+973,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+977,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+978,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+979,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+980,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+981,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+982,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+983,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0x12U))));
        bufp->chgBit(oldp+984,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0x12U))));
        bufp->chgBit(oldp+985,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+986,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+989,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+990,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+991,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+992,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+993,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                         & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+994,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+995,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+996,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                      >> 0x13U))));
        bufp->chgBit(oldp+997,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                      >> 0x13U))));
        bufp->chgBit(oldp+998,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                         & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1000,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1002,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1003,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1004,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1005,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x13U))))));
        bufp->chgBit(oldp+1006,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x13U))))));
        bufp->chgBit(oldp+1007,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1008,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1009,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 1U))));
        bufp->chgBit(oldp+1010,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 1U))));
        bufp->chgBit(oldp+1011,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1))))))));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1016,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1017,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1018,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 1U))))));
        bufp->chgBit(oldp+1019,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 1U))))));
        bufp->chgBit(oldp+1020,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1021,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1))))));
        bufp->chgBit(oldp+1022,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1023,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1024,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1029,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1030,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1031,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x14U))))));
        bufp->chgBit(oldp+1032,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x14U))))));
        bufp->chgBit(oldp+1033,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1034,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1035,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1036,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1037,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1042,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1043,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1044,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x15U))))));
        bufp->chgBit(oldp+1045,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x15U))))));
        bufp->chgBit(oldp+1046,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1047,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1048,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1049,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1050,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1053,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1055,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1056,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1057,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x16U))))));
        bufp->chgBit(oldp+1058,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x16U))))));
        bufp->chgBit(oldp+1059,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1060,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1061,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1062,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1063,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1064,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1068,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1069,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1070,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x17U))))));
        bufp->chgBit(oldp+1071,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x17U))))));
        bufp->chgBit(oldp+1072,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1073,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1074,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1075,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1076,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1077,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1078,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1079,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1081,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1082,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1083,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x18U))))));
        bufp->chgBit(oldp+1084,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x18U))))));
        bufp->chgBit(oldp+1085,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1086,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1087,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1088,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1089,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1094,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1095,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1096,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x19U))))));
        bufp->chgBit(oldp+1097,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x19U))))));
        bufp->chgBit(oldp+1098,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1099,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1100,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1101,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1102,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1103,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1107,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1108,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1109,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1aU))))));
        bufp->chgBit(oldp+1110,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x1aU))))));
        bufp->chgBit(oldp+1111,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1112,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1113,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1114,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1115,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1120,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1121,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1122,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1bU))))));
        bufp->chgBit(oldp+1123,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x1bU))))));
        bufp->chgBit(oldp+1124,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1125,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1126,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1127,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1128,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1133,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1134,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1135,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1cU))))));
        bufp->chgBit(oldp+1136,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x1cU))))));
        bufp->chgBit(oldp+1137,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1138,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1139,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1140,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1141,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1146,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1147,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1148,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1dU))))));
        bufp->chgBit(oldp+1149,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x1dU))))));
        bufp->chgBit(oldp+1150,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1151,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1152,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 2U))));
        bufp->chgBit(oldp+1153,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 2U))));
        bufp->chgBit(oldp+1154,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1159,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1160,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1161,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 2U))))));
        bufp->chgBit(oldp+1162,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 2U))))));
        bufp->chgBit(oldp+1163,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1164,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1165,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1166,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1167,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1168,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1169,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1170,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1171,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1172,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1173,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1174,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1eU))))));
        bufp->chgBit(oldp+1175,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x1eU))))));
        bufp->chgBit(oldp+1176,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1177,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1178,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1179,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1180,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1181,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1182,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1183,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1184,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1185,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1fU))))));
        bufp->chgBit(oldp+1186,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 0x1fU))))));
        bufp->chgBit(oldp+1187,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1188,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1189,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 3U))));
        bufp->chgBit(oldp+1190,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 3U))));
        bufp->chgBit(oldp+1191,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1195,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1196,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1197,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1198,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 3U))))));
        bufp->chgBit(oldp+1199,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 3U))))));
        bufp->chgBit(oldp+1200,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1201,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1202,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 4U))));
        bufp->chgBit(oldp+1203,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 4U))));
        bufp->chgBit(oldp+1204,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1207,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1209,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1210,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1211,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 4U))))));
        bufp->chgBit(oldp+1212,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 4U))))));
        bufp->chgBit(oldp+1213,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1214,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1215,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 5U))));
        bufp->chgBit(oldp+1216,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 5U))));
        bufp->chgBit(oldp+1217,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1219,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1220,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1222,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1223,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1224,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 5U))))));
        bufp->chgBit(oldp+1225,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 5U))))));
        bufp->chgBit(oldp+1226,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1227,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1228,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 6U))));
        bufp->chgBit(oldp+1229,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 6U))));
        bufp->chgBit(oldp+1230,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1232,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1233,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1234,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1235,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1236,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1237,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 6U))))));
        bufp->chgBit(oldp+1238,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 6U))))));
        bufp->chgBit(oldp+1239,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1240,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1241,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 7U))));
        bufp->chgBit(oldp+1242,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 7U))));
        bufp->chgBit(oldp+1243,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1244,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1245,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1248,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1249,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1250,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 7U))))));
        bufp->chgBit(oldp+1251,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 7U))))));
        bufp->chgBit(oldp+1252,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1253,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1254,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 8U))));
        bufp->chgBit(oldp+1255,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 8U))));
        bufp->chgBit(oldp+1256,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1261,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1262,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1263,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 8U))))));
        bufp->chgBit(oldp+1264,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 8U))))));
        bufp->chgBit(oldp+1265,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1266,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1267,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                       >> 9U))));
        bufp->chgBit(oldp+1268,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                       >> 9U))));
        bufp->chgBit(oldp+1269,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1271,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1273,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1274,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1275,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 9U))))));
        bufp->chgBit(oldp+1276,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 9U))))));
        bufp->chgBit(oldp+1277,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1278,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1279,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))))));
        bufp->chgQData(oldp+1280,((((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                                         & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (1U 
                                                                 | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin) 
                                                                     << 0x1fU) 
                                                                    | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin) 
                                                                        << 0x1eU) 
                                                                       | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin) 
                                                                           << 0x1dU) 
                                                                          | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin) 
                                                                              << 0x1cU) 
                                                                             | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin) 
                                                                                << 1U)))))))))))))))))))))))))))))))))))),33);
        bufp->chgBit(oldp+1282,((1U & (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2))));
        bufp->chgBit(oldp+1283,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1)))));
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1286,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1287,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1288,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1)))));
        bufp->chgBit(oldp+1289,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                          & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)))));
        bufp->chgBit(oldp+1290,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                          & (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2))))));
        bufp->chgBit(oldp+1291,(1U));
        bufp->chgBit(oldp+1292,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1294,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1295,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1299,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1300,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1301,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0xaU))))));
        bufp->chgBit(oldp+1302,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0xaU)))))));
        bufp->chgBit(oldp+1303,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1304,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1305,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1306,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1311,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1312,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1313,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0xbU))))));
        bufp->chgBit(oldp+1314,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0xbU)))))));
        bufp->chgBit(oldp+1315,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1316,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1317,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1318,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1319,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1323,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1324,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1325,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0xcU))))));
        bufp->chgBit(oldp+1326,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0xcU)))))));
        bufp->chgBit(oldp+1327,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1328,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1329,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1330,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1335,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1336,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1337,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0xdU))))));
        bufp->chgBit(oldp+1338,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0xdU)))))));
        bufp->chgBit(oldp+1339,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1340,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1341,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1342,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1346,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1347,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1348,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1349,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0xeU))))));
        bufp->chgBit(oldp+1350,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0xeU)))))));
        bufp->chgBit(oldp+1351,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1352,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1353,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+1354,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1359,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1360,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1361,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0xfU))))));
        bufp->chgBit(oldp+1362,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0xfU)))))));
        bufp->chgBit(oldp+1363,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1364,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1365,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1366,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1367,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1371,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1372,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1373,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x10U))))));
        bufp->chgBit(oldp+1374,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x10U)))))));
        bufp->chgBit(oldp+1375,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1376,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1377,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1378,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1383,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1384,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1385,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x11U))))));
        bufp->chgBit(oldp+1386,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x11U)))))));
        bufp->chgBit(oldp+1387,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1388,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1389,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1390,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1391,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1393,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1395,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1396,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1397,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x12U))))));
        bufp->chgBit(oldp+1398,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x12U)))))));
        bufp->chgBit(oldp+1399,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1400,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1401,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1402,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1403,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1404,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1405,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1406,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1407,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1408,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1409,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x13U))))));
        bufp->chgBit(oldp+1410,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x13U)))))));
        bufp->chgBit(oldp+1411,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1412,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1413,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 1U)))));
        bufp->chgBit(oldp+1414,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1415,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1417,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1419,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1420,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1421,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 1U))))));
        bufp->chgBit(oldp+1422,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 1U)))))));
        bufp->chgBit(oldp+1423,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1424,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1425,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1426,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1429,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1431,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1432,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1433,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x14U))))));
        bufp->chgBit(oldp+1434,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x14U)))))));
        bufp->chgBit(oldp+1435,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1436,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1437,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1438,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1439,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1440,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1441,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1442,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1443,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1444,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1445,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x15U))))));
        bufp->chgBit(oldp+1446,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x15U)))))));
        bufp->chgBit(oldp+1447,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1448,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1449,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1450,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1453,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1455,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1456,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1457,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x16U))))));
        bufp->chgBit(oldp+1458,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x16U)))))));
        bufp->chgBit(oldp+1459,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1460,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1461,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1462,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1463,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1467,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1468,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1469,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x17U))))));
        bufp->chgBit(oldp+1470,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x17U)))))));
        bufp->chgBit(oldp+1471,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1472,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1473,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1474,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1475,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1477,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1479,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1480,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1481,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x18U))))));
        bufp->chgBit(oldp+1482,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x18U)))))));
        bufp->chgBit(oldp+1483,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1484,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1485,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1486,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1491,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1492,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1493,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x19U))))));
        bufp->chgBit(oldp+1494,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x19U)))))));
        bufp->chgBit(oldp+1495,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1496,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1497,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1498,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1499,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1501,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1503,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1504,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1505,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1aU))))));
        bufp->chgBit(oldp+1506,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1aU)))))));
        bufp->chgBit(oldp+1507,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1508,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1509,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1510,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1512,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1513,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1515,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1516,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1517,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1bU))))));
        bufp->chgBit(oldp+1518,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1bU)))))));
        bufp->chgBit(oldp+1519,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1520,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1521,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1522,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1523,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1527,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1528,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1529,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1cU))))));
        bufp->chgBit(oldp+1530,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1cU)))))));
        bufp->chgBit(oldp+1531,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1532,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1533,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1534,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1536,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1539,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1540,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1541,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1dU))))));
        bufp->chgBit(oldp+1542,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1dU)))))));
        bufp->chgBit(oldp+1543,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1544,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1545,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 2U)))));
        bufp->chgBit(oldp+1546,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1547,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1550,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1551,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1552,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1553,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 2U))))));
        bufp->chgBit(oldp+1554,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 2U)))))));
        bufp->chgBit(oldp+1555,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1556,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1557,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1558,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1559,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1561,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1563,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1564,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1565,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1eU))))));
        bufp->chgBit(oldp+1566,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1eU)))))));
        bufp->chgBit(oldp+1567,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1568,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1569,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1570,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1572,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1573,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1574,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1575,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1576,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 0x1fU))))));
        bufp->chgBit(oldp+1577,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1fU)))))));
        bufp->chgBit(oldp+1578,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1579,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1580,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 3U)))));
        bufp->chgBit(oldp+1581,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1582,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1583,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1584,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1585,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1586,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1587,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1588,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 3U))))));
        bufp->chgBit(oldp+1589,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 3U)))))));
        bufp->chgBit(oldp+1590,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1591,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1592,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 4U)))));
        bufp->chgBit(oldp+1593,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1594,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1595,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1596,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1597,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1598,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1599,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1600,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 4U))))));
        bufp->chgBit(oldp+1601,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 4U)))))));
        bufp->chgBit(oldp+1602,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1603,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1604,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 5U)))));
        bufp->chgBit(oldp+1605,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1606,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1608,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1610,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1611,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1612,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 5U))))));
        bufp->chgBit(oldp+1613,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 5U)))))));
        bufp->chgBit(oldp+1614,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1615,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1616,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 6U)))));
        bufp->chgBit(oldp+1617,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1618,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1619,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1620,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1621,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1622,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1623,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1624,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 6U))))));
        bufp->chgBit(oldp+1625,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 6U)))))));
        bufp->chgBit(oldp+1626,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1627,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1628,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 7U)))));
        bufp->chgBit(oldp+1629,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1630,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1631,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1634,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1635,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1636,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 7U))))));
        bufp->chgBit(oldp+1637,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 7U)))))));
        bufp->chgBit(oldp+1638,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1639,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1640,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 8U)))));
        bufp->chgBit(oldp+1641,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1645,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1646,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1647,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1648,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 8U))))));
        bufp->chgBit(oldp+1649,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 8U)))))));
        bufp->chgBit(oldp+1650,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1651,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1652,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                          >> 9U)))));
        bufp->chgBit(oldp+1653,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1655,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1));
        bufp->chgBit(oldp+1656,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1657,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)))));
        bufp->chgBit(oldp+1658,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1659,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                                             >> 9U))))));
        bufp->chgBit(oldp+1660,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 9U)))))));
        bufp->chgBit(oldp+1661,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1662,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub.__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+1663,(((0U == (0x1fU & 
                                           (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                   [(0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                              >> 0x14U))])),32);
        bufp->chgIData(oldp+1664,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc),32);
        bufp->chgIData(oldp+1665,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst),32);
        bufp->chgCData(oldp+1666,((0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1667,((0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1668,((0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1669,((0x7fU & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)),7);
        bufp->chgCData(oldp+1670,((7U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1671,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                   >> 0x19U)),7);
        bufp->chgIData(oldp+1672,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out),32);
        bufp->chgIData(oldp+1673,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data),32);
        bufp->chgIData(oldp+1674,((((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                >> 0x14U))),32);
        bufp->chgIData(oldp+1675,((((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1676,((((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1677,((0xfffff000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)),32);
        bufp->chgIData(oldp+1678,((((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                          >> 0x14U)))))),32);
        bufp->chgCData(oldp+1679,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_instr_type),3);
        bufp->chgIData(oldp+1680,((((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                        & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2))))) 
                                    << 0x1fU) | ((0x40000000U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                         & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                                       & (~ 
                                                          ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                           & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2))))) 
                                                     << 0x1eU)) 
                                                 | ((0x20000000U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                                          & (~ 
                                                             ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2))))) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & ((~ 
                                                            ((~ 
                                                              ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                                             & (~ 
                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                                 & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2))))) 
                                                           << 0x1cU)) 
                                                       | ((0x8000000U 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                                  & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                                                & (~ 
                                                                   ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                                    & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2))))) 
                                                              << 0x1bU)) 
                                                          | ((0x4000000U 
                                                              & ((~ 
                                                                  ((~ 
                                                                    ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                                     & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                                                   & (~ 
                                                                      ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                                       & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2))))) 
                                                                 << 0x1aU)) 
                                                             | ((0x2000000U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                                        & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                                                      & (~ 
                                                                         ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2))))) 
                                                                    << 0x19U)) 
                                                                | ((0x1000000U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                                           & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                                             & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2))))) 
                                                                       << 0x18U)) 
                                                                   | ((0x800000U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                                                            & (~ 
                                                                               ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2))))) 
                                                                          << 0x17U)) 
                                                                      | ((0x400000U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                                                               & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2))))) 
                                                                             << 0x16U)) 
                                                                         | ((0x200000U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x15U)) 
                                                                            | ((0x100000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x14U)) 
                                                                               | ((0x80000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))) 
                                                                                << 3U)) 
                                                                                | ((((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1)) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1681,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2));
        bufp->chgIData(oldp+1682,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0]),32);
        bufp->chgIData(oldp+1683,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[1]),32);
        bufp->chgIData(oldp+1684,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[2]),32);
        bufp->chgIData(oldp+1685,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[3]),32);
        bufp->chgIData(oldp+1686,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[4]),32);
        bufp->chgIData(oldp+1687,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[5]),32);
        bufp->chgIData(oldp+1688,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[6]),32);
        bufp->chgIData(oldp+1689,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[7]),32);
        bufp->chgIData(oldp+1690,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[8]),32);
        bufp->chgIData(oldp+1691,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[9]),32);
        bufp->chgIData(oldp+1692,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[10]),32);
        bufp->chgIData(oldp+1693,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[11]),32);
        bufp->chgIData(oldp+1694,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[12]),32);
        bufp->chgIData(oldp+1695,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[13]),32);
        bufp->chgIData(oldp+1696,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[14]),32);
        bufp->chgIData(oldp+1697,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[15]),32);
        bufp->chgIData(oldp+1698,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[16]),32);
        bufp->chgIData(oldp+1699,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[17]),32);
        bufp->chgIData(oldp+1700,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[18]),32);
        bufp->chgIData(oldp+1701,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[19]),32);
        bufp->chgIData(oldp+1702,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[20]),32);
        bufp->chgIData(oldp+1703,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[21]),32);
        bufp->chgIData(oldp+1704,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[22]),32);
        bufp->chgIData(oldp+1705,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[23]),32);
        bufp->chgIData(oldp+1706,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[24]),32);
        bufp->chgIData(oldp+1707,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[25]),32);
        bufp->chgIData(oldp+1708,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[26]),32);
        bufp->chgIData(oldp+1709,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[27]),32);
        bufp->chgIData(oldp+1710,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[28]),32);
        bufp->chgIData(oldp+1711,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[29]),32);
        bufp->chgIData(oldp+1712,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[30]),32);
        bufp->chgIData(oldp+1713,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[31]),32);
        bufp->chgIData(oldp+1714,(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__i),32);
        bufp->chgQData(oldp+1715,((((QData)((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2) 
                                                                                << 4U) 
                                                                                | ((IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin) 
                                                                                << 3U))))))))))))))))))))))))))))))))),33);
        bufp->chgBit(oldp+1717,((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc)));
        bufp->chgBit(oldp+1718,((1U & (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc))));
        bufp->chgBit(oldp+1719,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1720,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1721,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1724,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1725,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1726,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1727,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1728,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1729,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1730,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1732,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1733,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1734,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1735,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1736,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1737,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1738,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1739,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1740,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1741,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1742,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1743,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1744,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1745,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1747,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1748,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1749,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1750,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1751,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1752,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1753,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1754,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1755,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1756,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1757,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1758,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1759,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1760,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1761,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1762,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1763,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1764,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1765,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+1766,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1767,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1768,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1769,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1772,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1773,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1774,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1775,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1776,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1777,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1780,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1781,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1782,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1783,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1784,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1785,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1788,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1789,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1790,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1791,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1792,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1793,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1794,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1795,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1796,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1797,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1798,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1799,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1800,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 1U))));
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1802,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 1U)))));
        bufp->chgBit(oldp+1803,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1)))));
        bufp->chgBit(oldp+1804,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1805,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1807,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1808,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1809,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1810,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1811,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1812,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1813,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1814,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1816,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1817,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1818,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1819,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1820,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1821,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1822,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1823,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1824,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1825,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1826,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1827,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1828,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1829,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1830,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1832,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1833,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1834,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1835,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1836,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1837,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1840,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1841,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1842,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1843,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1844,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1845,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1848,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1849,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1850,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1851,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1852,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1853,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1854,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1855,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1856,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1857,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1858,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1859,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1860,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1861,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1862,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1864,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1865,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1866,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1867,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1868,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1869,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1870,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1871,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1872,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1873,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1874,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1875,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1876,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1877,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1878,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1879,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1880,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1881,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1882,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1883,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1884,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 2U))));
        bufp->chgBit(oldp+1885,(((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                 & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))));
        bufp->chgBit(oldp+1886,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
        bufp->chgBit(oldp+1887,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1888,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 2U)))));
        bufp->chgBit(oldp+1889,(1U));
        bufp->chgBit(oldp+1890,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1891,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1892,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1893,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1894,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1895,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1896,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1897,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1898,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1899,((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1900,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1901,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1902,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1903,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1904,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1905,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1906,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 3U))));
        bufp->chgBit(oldp+1907,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))))));
        bufp->chgBit(oldp+1908,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1910,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1911,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 3U)))));
        bufp->chgBit(oldp+1912,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1913,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))));
        bufp->chgBit(oldp+1914,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 4U))));
        bufp->chgBit(oldp+1915,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1916,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1917,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1918,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1919,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 4U)))));
        bufp->chgBit(oldp+1920,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1921,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1922,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 5U))));
        bufp->chgBit(oldp+1923,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1924,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1925,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1926,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1927,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 5U)))));
        bufp->chgBit(oldp+1928,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1929,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1930,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 6U))));
        bufp->chgBit(oldp+1931,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1932,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1933,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1934,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1935,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 6U)))));
        bufp->chgBit(oldp+1936,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1937,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1938,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 7U))));
        bufp->chgBit(oldp+1939,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1940,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1941,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1942,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1943,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 7U)))));
        bufp->chgBit(oldp+1944,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1945,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1946,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 8U))));
        bufp->chgBit(oldp+1947,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1948,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2));
        bufp->chgBit(oldp+1949,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1950,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1951,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 8U)))));
        bufp->chgBit(oldp+1952,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1953,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2))))));
        bufp->chgBit(oldp+1954,((1U & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                       >> 9U))));
        bufp->chgBit(oldp+1955,((1U & (~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2))))))));
        bufp->chgBit(oldp+1956,(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1));
        bufp->chgBit(oldp+1957,((1U & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
        bufp->chgBit(oldp+1958,((1U & (~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                                          >> 9U)))));
        bufp->chgBit(oldp+1959,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))))));
        bufp->chgBit(oldp+1960,((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                          & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2))))));
    }
    bufp->chgBit(oldp+1961,(vlSelf->i_clk));
    bufp->chgBit(oldp+1962,(vlSelf->i_rst_n));
}

void Vysyx_24090003_computer___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24090003_computer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090003_computer___024root*>(voidSelf);
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
