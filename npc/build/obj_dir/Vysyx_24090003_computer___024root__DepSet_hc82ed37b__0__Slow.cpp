// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer__Syms.h"
#include "Vysyx_24090003_computer___024root.h"

VL_ATTR_COLD void Vysyx_24090003_computer_adder_32bit___eval_initial__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder(Vysyx_24090003_computer_adder_32bit* vlSelf);

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_initial(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_initial\n"); );
    // Body
    Vysyx_24090003_computer_adder_32bit___eval_initial__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__i_clk = vlSelf->i_clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__stl(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_triggers__stl(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090003_computer___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vysyx_24090003_computer___024root___stl_sequent__TOP__0(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer_adder_32bit___nba_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer___024root___ico_sequent__TOP__1(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer___024root___ico_sequent__TOP__2(Vysyx_24090003_computer___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090003_computer___024root___eval_stl(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24090003_computer___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vysyx_24090003_computer_adder_32bit___nba_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub));
        Vysyx_24090003_computer___024root___ico_sequent__TOP__1(vlSelf);
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder));
        Vysyx_24090003_computer___024root___ico_sequent__TOP__2(vlSelf);
    }
}
