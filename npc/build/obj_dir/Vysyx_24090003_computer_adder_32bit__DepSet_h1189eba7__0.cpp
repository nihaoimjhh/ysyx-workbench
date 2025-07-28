// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer__Syms.h"
#include "Vysyx_24090003_computer_adder_32bit.h"

VL_INLINE_OPT void Vysyx_24090003_computer_adder_32bit___nba_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___nba_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder__0\n"); );
    // Body
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__ha1__DOT__nand_a_nand_ab 
        = (1U & (~ vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 1U));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1 
        = (1U & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                    >> 2U)));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1 
        = (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
           >> 0x1fU);
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x1eU));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x1dU));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x1cU));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x1bU));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x1aU));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x19U));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x18U));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x17U));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x16U));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x15U));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x14U));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x13U));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x12U));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x11U));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0x10U));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0xfU));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0xeU));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0xdU));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0xcU));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0xbU));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 0xaU));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 9U));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 8U));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 7U));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 6U));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 5U));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 4U));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                 >> 3U));
    vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (~ ((~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
                        >> 2U)) & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2));
}

VL_INLINE_OPT void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0\n"); );
    // Body
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1 
        = ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
            & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
           >> 0x1fU);
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x1eU));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x1dU));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x1cU));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x1bU));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x1aU));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x19U));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x18U));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x17U));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x16U));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x15U));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x14U));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x13U));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x12U));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x11U));
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                 & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0x10U));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0xfU));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0xeU));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0xdU));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0xcU));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0xbU));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 0xaU));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 9U));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 8U));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 7U));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 6U));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 5U));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 4U));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 3U));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 2U));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2) 
                 >> 1U));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1fU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x1fU))))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1eU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x1eU))))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1dU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x1dU))))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1cU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x1cU))))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1bU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x1bU))))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1aU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x1aU))))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x19U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x19U))))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x18U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x18U))))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x17U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x17U))))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x16U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x16U))))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x15U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x15U))))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x14U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x14U))))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x13U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x13U))))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x12U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x12U))))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x11U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x11U))))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x10U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 0x10U))))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xfU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xfU))))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xeU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xeU))))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xdU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xdU))))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xcU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xcU))))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xbU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xbU))))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xaU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                               >> 0xaU))))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 9U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 9U))))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 8U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 8U))))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 7U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 7U))))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 6U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 6U))))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 5U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 5U))))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 4U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 4U))))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 3U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 3U))))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 2U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 2U))))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 1U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                             >> 1U))))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1));
    vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
}

VL_INLINE_OPT void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0\n"); );
    // Body
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1 
        = ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
            >> 0x1fU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                            >> 0x1fU)));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x1eU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x1eU))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x1dU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x1dU))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x1cU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x1cU))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x1bU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x1bU))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x1aU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x1aU))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x19U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x19U))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x18U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x18U))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x17U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x17U))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x16U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x16U))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x15U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x15U))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x14U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x14U))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x13U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x13U))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x12U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x12U))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x11U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x11U))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0x10U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                  >> 0x10U))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0xfU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                 >> 0xfU))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0xeU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                 >> 0xeU))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0xdU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                 >> 0xdU))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0xcU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                 >> 0xcU))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0xbU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                 >> 0xbU))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 0xaU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                 >> 0xaU))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 9U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 9U))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 8U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 8U))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 7U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 7U))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 6U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 6U))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 5U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 5U))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 4U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 4U))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 3U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 3U))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 2U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 2U))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                  >> 1U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                               >> 1U))));
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                 & (~ vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1fU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x1fU)))))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1eU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x1eU)))))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1dU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x1dU)))))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1cU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x1cU)))))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1bU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x1bU)))))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x1aU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x1aU)))))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x19U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x19U)))))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x18U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x18U)))))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x17U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x17U)))))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x16U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x16U)))))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x15U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x15U)))))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x14U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x14U)))))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x13U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x13U)))))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x12U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x12U)))))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x11U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x11U)))))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0x10U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xfU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                  >> 0xfU)))))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xeU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                  >> 0xeU)))))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xdU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                  >> 0xdU)))))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xcU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                  >> 0xcU)))))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xbU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                  >> 0xbU)))))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 0xaU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                  >> 0xaU)))))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 9U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 9U)))))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 8U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 8U)))))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 7U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 7U)))))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 6U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 6U)))))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 5U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 5U)))))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 4U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 4U)))))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 3U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 3U)))))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 2U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 2U)))))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           >> 1U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                >> 1U)))))));
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                        & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1)) 
                    & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                          & (~ vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))));
    vlSelf->__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1)))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
    vlSelf->sum = (((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                            & (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                        & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                              & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                    << 0x1fU) | ((0x40000000U & ((~ 
                                                  ((~ 
                                                    ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                     & (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                           & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                 & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                            & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                  & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((~ ((~ 
                                                  ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                   & (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                                 & (~ 
                                                    ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                     & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((~ 
                                                 ((~ 
                                                   ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                    & (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                      & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((~ 
                                                    ((~ 
                                                      ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                                     & (~ 
                                                        ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                         & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                          & (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                                        & (~ 
                                                           ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                            & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((~ 
                                                          ((~ 
                                                            ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                             & (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                                           & (~ 
                                                              ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                               & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((~ 
                                                             ((~ 
                                                               ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                                              & (~ 
                                                                 ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                  & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((~ 
                                                                ((~ 
                                                                  ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                   & (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                     & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((~ 
                                                                   ((~ 
                                                                     ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                      & (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                                                    & (~ 
                                                                       ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                        & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((~ 
                                                                      ((~ 
                                                                        ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                         & (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((~ 
                                                                         ((~ 
                                                                           ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                            & (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                              & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((~ 
                                                                            ((~ 
                                                                              ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                               & (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                                                             & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0\n"); );
    // Body
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1 
        = ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
            & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
           >> 0x1fU);
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x1eU));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x1dU));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x1cU));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x1bU));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x1aU));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x19U));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x18U));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x17U));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x16U));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x15U));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x14U));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x13U));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x12U));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x11U));
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                 & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0x10U));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0xfU));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0xeU));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0xdU));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0xcU));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0xbU));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 0xaU));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 9U));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 8U));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 7U));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 6U));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 5U));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 4U));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 3U));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 2U));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2) 
                 >> 1U));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1fU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1fU))))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1eU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1eU))))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1dU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1dU))))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1cU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1cU))))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1bU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1bU))))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1aU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x1aU))))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x19U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x19U))))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x18U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x18U))))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x17U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x17U))))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x16U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x16U))))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x15U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x15U))))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x14U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x14U))))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x13U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x13U))))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x12U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x12U))))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x11U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x11U))))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x10U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                             & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 0x10U))))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xfU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                               >> 0xfU))))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xeU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                               >> 0xeU))))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xdU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                               >> 0xdU))))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xcU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                               >> 0xcU))))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xbU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                               >> 0xbU))))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xaU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                            & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                               >> 0xaU))))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 9U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 9U))))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 8U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 8U))))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 7U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 7U))))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 6U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 6U))))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 5U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 5U))))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 4U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 4U))))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 3U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 3U))))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 2U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 2U))))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 1U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                             >> 1U))))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1));
    vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
    vlSelf->sum = (((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                            & (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                        & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                              & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                    << 0x1fU) | ((0x40000000U & ((~ 
                                                  ((~ 
                                                    ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                     & (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                                   & (~ 
                                                      ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                           & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                 & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                            & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                  & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((~ ((~ 
                                                  ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                   & (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1))) 
                                                 & (~ 
                                                    ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)) 
                                                     & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin))))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((~ 
                                                 ((~ 
                                                   ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                    & (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1))) 
                                                  & (~ 
                                                     ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)) 
                                                      & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin))))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((~ 
                                                    ((~ 
                                                      ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1))) 
                                                     & (~ 
                                                        ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)) 
                                                         & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin))))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((~ 
                                                       ((~ 
                                                         ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                          & (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1))) 
                                                        & (~ 
                                                           ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)) 
                                                            & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin))))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((~ 
                                                          ((~ 
                                                            ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                             & (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1))) 
                                                           & (~ 
                                                              ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)) 
                                                               & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin))))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((~ 
                                                             ((~ 
                                                               ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1))) 
                                                              & (~ 
                                                                 ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)) 
                                                                  & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin))))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((~ 
                                                                ((~ 
                                                                  ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                   & (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1))) 
                                                                 & (~ 
                                                                    ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)) 
                                                                     & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin))))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((~ 
                                                                   ((~ 
                                                                     ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                      & (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1))) 
                                                                    & (~ 
                                                                       ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)) 
                                                                        & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin))))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((~ 
                                                                      ((~ 
                                                                        ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                         & (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1))) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)) 
                                                                           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin))))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((~ 
                                                                         ((~ 
                                                                           ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                            & (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1))) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)) 
                                                                              & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin))))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((~ 
                                                                            ((~ 
                                                                              ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                               & (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1))) 
                                                                             & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin))))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin))))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin))))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                                                                & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                                                                                & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0\n"); );
    // Body
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1 
        = ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
            >> 0x1fU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                            >> 0x1fU)));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x1eU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x1eU))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x1dU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x1dU))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x1cU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x1cU))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x1bU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x1bU))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x1aU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x1aU))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x19U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x19U))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x18U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x18U))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x17U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x17U))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x16U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x16U))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x15U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x15U))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x14U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x14U))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x13U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x13U))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x12U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x12U))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x11U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x11U))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0x10U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                  >> 0x10U))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0xfU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0xfU))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0xeU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0xeU))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0xdU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0xdU))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0xcU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0xcU))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0xbU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0xbU))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 0xaU) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                 >> 0xaU))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 9U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 9U))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 8U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 8U))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 7U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 7U))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 6U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 6U))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 5U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 5U))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 4U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 4U))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 3U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 3U))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 2U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 2U))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1 
        = (1U & ((vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 1U) & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                               >> 1U))));
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1 
        = (1U & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                 & (~ vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1fU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x1fU)))))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1eU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x1eU)))))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1dU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x1dU)))))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1cU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x1cU)))))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1bU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x1bU)))))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x1aU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x1aU)))))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x19U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x19U)))))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x18U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x18U)))))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x17U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x17U)))))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x16U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x16U)))))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x15U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x15U)))))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x14U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x14U)))))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x13U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x13U)))))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x12U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x12U)))))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x11U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x11U)))))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0x10U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                                             & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xfU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                  >> 0xfU)))))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xeU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                  >> 0xeU)))))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xdU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                  >> 0xdU)))))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xcU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                  >> 0xcU)))))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xbU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                  >> 0xbU)))))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 0xaU))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                                            & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                  >> 0xaU)))))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 9U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 9U)))))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 8U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 8U)))))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 7U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 7U)))))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 6U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 6U)))))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 5U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 5U)))))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 4U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 4U)))))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 3U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 3U)))))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 2U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 2U)))))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                        & (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                           >> 1U))) & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                                          & (~ (vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
                                                >> 1U)))))));
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                        & vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1)) 
                    & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                          & (~ vlSymsp->TOP.ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2))))));
    vlSelf->__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1)))));
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin));
    vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin 
        = (1U & (~ ((~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1)) 
                    & (~ (IData)(vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)))));
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2 
        = ((IData)(vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1) 
           & (IData)(vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin));
}
