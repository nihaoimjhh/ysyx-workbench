// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer_adder_32bit.h"

VL_ATTR_COLD void Vysyx_24090003_computer_adder_32bit___eval_initial__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___eval_initial__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder\n"); );
    // Body
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2 = 0U;
}

VL_ATTR_COLD void Vysyx_24090003_computer_adder_32bit___ctor_var_reset(Vysyx_24090003_computer_adder_32bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_24090003_computer_adder_32bit___ctor_var_reset\n"); );
    // Body
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->cin = 0;
    vlSelf->sum = 0;
    vlSelf->cout = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin = 0;
    vlSelf->__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin = 0;
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__ha1__DOT__nand_a_nand_ab = 0;
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2 = 0;
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1 = 0;
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1 = 0;
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum2 = 0;
    vlSelf->__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2 = 0;
}
