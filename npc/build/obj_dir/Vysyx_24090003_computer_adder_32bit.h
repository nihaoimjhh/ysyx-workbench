// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24090003_computer.h for the primary calling header

#ifndef VERILATED_VYSYX_24090003_COMPUTER_ADDER_32BIT_H_
#define VERILATED_VYSYX_24090003_COMPUTER_ADDER_32BIT_H_  // guard

#include "verilated.h"

class Vysyx_24090003_computer__Syms;

class Vysyx_24090003_computer_adder_32bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(cout,0,0);
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__1__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__2__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__3__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__4__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__5__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__6__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__7__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__8__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__9__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__10__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__11__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__12__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__13__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__14__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__15__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__16__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__17__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__18__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__19__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__20__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__21__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__22__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__23__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__24__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__25__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__26__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin;
        CData/*0:0*/ __Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin;
        CData/*0:0*/ __PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__ha1__DOT__nand_a_nand_ab;
        CData/*0:0*/ __PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__1__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__2__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__3__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__4__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__5__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__6__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__sum2;
    };
    struct {
        CData/*0:0*/ __PVT__gen_adders__BRA__7__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__8__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__9__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__10__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__11__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__12__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__13__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__14__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__15__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__16__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__17__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__18__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__19__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__20__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__21__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__22__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__sum2;
    };
    struct {
        CData/*0:0*/ __PVT__gen_adders__BRA__23__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__24__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__25__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__26__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2;
        CData/*0:0*/ __PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1;
        CData/*0:0*/ __PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry1;
        CData/*0:0*/ __PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum2;
        CData/*0:0*/ __PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2;
        VL_IN(a,31,0);
        VL_IN(b,31,0);
        VL_OUT(sum,31,0);
    };

    // INTERNAL VARIABLES
    Vysyx_24090003_computer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24090003_computer_adder_32bit(Vysyx_24090003_computer__Syms* symsp, const char* v__name);
    ~Vysyx_24090003_computer_adder_32bit();
    VL_UNCOPYABLE(Vysyx_24090003_computer_adder_32bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
