// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090003_computer.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090003_computer__Syms.h"
#include "Vysyx_24090003_computer___024root.h"

extern "C" int cpu_pmem_read(int addr);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &cpu_pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int cpu_pmem_read__Vfuncrtn__Vcvt;
    cpu_pmem_read__Vfuncrtn__Vcvt = cpu_pmem_read(addr__Vcvt);
    cpu_pmem_read__Vfuncrtn = cpu_pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void cpu_pmem_write(int addr, int data, char wmask);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    cpu_pmem_write(addr__Vcvt, data__Vcvt, wmask__Vcvt);
}

extern "C" void set_inst(int value);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_inst_TOP(IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_inst_TOP\n"); );
    // Body
    int value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    set_inst(value__Vcvt);
}

extern "C" void set_pc(int value);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_pc_TOP(IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_pc_TOP\n"); );
    // Body
    int value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    set_pc(value__Vcvt);
}

extern "C" void set_dnpc(int value);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_dnpc_TOP(IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_dnpc_TOP\n"); );
    // Body
    int value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    set_dnpc(value__Vcvt);
}

extern "C" void inst_not_found(char flag, char rst);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP(CData/*7:0*/ flag, CData/*7:0*/ rst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__inst_not_found_TOP\n"); );
    // Body
    char flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    char rst__Vcvt;
    for (size_t rst__Vidx = 0; rst__Vidx < 1; ++rst__Vidx) rst__Vcvt = rst;
    inst_not_found(flag__Vcvt, rst__Vcvt);
}

extern "C" void finish_simulation();

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__finish_simulation_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__finish_simulation_TOP\n"); );
    // Body
    finish_simulation();
}

extern "C" void set_gpr(int index, int value);

VL_INLINE_OPT void Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP(IData/*31:0*/ index, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__set_gpr_TOP\n"); );
    // Body
    int index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    int value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    set_gpr(index__Vcvt, value__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__ico(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090003_computer___024root___eval_triggers__ico(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090003_computer___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vysyx_24090003_computer___024root___ico_sequent__TOP__1(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result 
        = ((8U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
            ? ((4U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                ? (((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                            & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                        & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                    << 0x1fU) | ((0x40000000U & ((~ 
                                                  ((~ 
                                                    ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                     & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__sum1))) 
                                                   & (~ 
                                                      ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2)) 
                                                       & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__30__KET____DOT__fa__cin))))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                              & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__sum1))) 
                                          & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__29__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__29__KET____DOT__fa__cin))))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                               & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__sum1))) 
                                           & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__28__KET____DOT__fa__DOT__carry2)) 
                                                 & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__28__KET____DOT__fa__cin))))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__sum1))) 
                                            & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__27__KET____DOT__fa__DOT__carry2)) 
                                                  & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__27__KET____DOT__fa__cin))))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((~ ((~ 
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
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))))))))))))))))))))))))))))))))))
                : ((2U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                        ? (((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                    & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                      & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((~ ((~ 
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
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))))))))))))))))))))))))))))))))))
                        : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                    : ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                        ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           < vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                        : (1U & (((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                   >> 0x1fU) == (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2 
                                                 >> 0x1fU))
                                  ? (vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.sum 
                                     >> 0x1fU) : (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                                  >> 0x1fU))))))
            : ((4U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                ? ((2U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                        ? ((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                            ? (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4 
                                             >> 0x10U))
                            : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sra_level4)
                        : ((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                            ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4 
                               >> 0x10U) : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_srl_level4))
                    : ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                        ? ((0x10U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                            ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4 
                               << 0x10U) : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__w_sll_level4)
                        : (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           ^ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)))
                : ((2U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                        ? (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           | vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2)
                        : (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in1 
                           & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))
                    : ((1U & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_op))
                        ? vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub.sum
                        : (((~ ((~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                    & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                & (~ ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                      & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder.__Vcellinp__gen_adders__BRA__31__KET____DOT__fa__cin))))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((~ ((~ 
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
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_alu_in2))))))))))))))))))))))))))))))))))))))));
    if (((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en) 
         & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we))) {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_write_TOP(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result, 
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                                                >> 0x14U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                                                                                >> 0x14U))]), 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                                                                                 ? 2U
                                                                                 : 4U)));
    }
    if (((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_en) 
         & (~ (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_we)))) {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu_pmem_read_TOP(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result, vlSelf->__Vfunc_ysyx_24090003_computer__DOT__cpu_pmem_read__0__Vfuncout);
        vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
            = vlSelf->__Vfunc_ysyx_24090003_computer__DOT__cpu_pmem_read__0__Vfuncout;
    } else {
        vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata = 0U;
    }
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken 
        = ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch) 
           & ((0x4000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
               ? ((0x2000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                   ? ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                       ? (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result)
                       : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result)
                   : ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                       ? (~ vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result)
                       : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result))
               : ((~ (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                      >> 0xdU)) & ((0x1000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst)
                                    ? (0U != vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result)
                                    : (0U == vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result)))));
    if (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
            = ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr)
                ? vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_rs1_data
                : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out;
    } else if (((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch) 
                & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken))) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__idu__DOT__r_imm_out;
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2 = 0U;
    }
    if ((1U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
               << 1U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
               >> 1U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1 
            = ((0x80000000U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1) 
               | (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                  >> 1U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1;
    }
    if ((2U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1 
               << 2U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1 
               >> 2U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2 
            = (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                            >> 0x1fU))) << 0x1eU) | 
               (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1 
                >> 2U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level1;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level1;
    }
    if ((4U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2 
               << 4U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2 
               >> 4U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3 
            = (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                            >> 0x1fU))) << 0x1cU) | 
               (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2 
                >> 4U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level2;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level2;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level2;
    }
    if ((8U & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in2)) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3 
               << 8U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4 
            = (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3 
               >> 8U);
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4 
            = (((- (IData)((vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_pc_alu_in1 
                            >> 0x1fU))) << 0x18U) | 
               (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3 
                >> 8U));
    } else {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level4 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sll_level3;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level4 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_srl_level3;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level4 
            = vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__w_sra_level3;
    }
}

VL_INLINE_OPT void Vysyx_24090003_computer___024root___ico_sequent__TOP__2(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___ico_sequent__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump) 
         | ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken) 
            & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch)))) {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_dnpc_TOP(
                                                                                ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr)
                                                                                 ? 
                                                                                (0xfffffffeU 
                                                                                & vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum)
                                                                                 : vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum));
    } else {
        Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_dnpc_TOP(
                                                                                (((~ 
                                                                                ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                                                & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2))))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
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
                                                                                & vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc)))))))))))))))))))))))))))))))));
    }
}

void Vysyx_24090003_computer___024root___ico_sequent__TOP__0(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0(Vysyx_24090003_computer_adder_32bit* vlSelf);
void Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf);

void Vysyx_24090003_computer___024root___eval_ico(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24090003_computer___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub));
        Vysyx_24090003_computer___024root___ico_sequent__TOP__1(vlSelf);
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder));
        Vysyx_24090003_computer___024root___ico_sequent__TOP__2(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090003_computer___024root___dump_triggers__act(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090003_computer___024root___eval_triggers__act(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__i_clk)));
    vlSelf->__Vtrigrprev__TOP__i_clk = vlSelf->i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090003_computer___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24090003_computer__ConstPool__TABLE_h0800e15e_0;

VL_INLINE_OPT void Vysyx_24090003_computer___024root___nba_sequent__TOP__0(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v0;
    __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32;
    __Vdlyvdim0__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32;
    __Vdlyvval__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32;
    __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 = 0;
    // Body
    __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v0 = 0U;
    __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 = 0U;
    if ((1U & (~ (IData)(vlSelf->i_rst_n)))) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__i = 0x20U;
        __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v0 = 1U;
    }
    if (((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_reg_wen) 
         & (0U != (0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                            >> 7U))))) {
        __Vdlyvval__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 
            = ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump)
                ? ((IData)(4U) + vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc)
                : ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_to_reg)
                    ? ((0U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                        ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned)
                            ? (0xffU & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)
                            : (((- (IData)((1U & (vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)))
                        : ((1U == (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_width))
                            ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_mem_unsigned)
                                ? (0xffffU & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)
                                : (((- (IData)((1U 
                                                & (vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata)))
                            : vlSelf->ysyx_24090003_computer__DOT__r_mem_rdata))
                    : vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_alu_result));
        __Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 = 1U;
        __Vdlyvdim0__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32 
            = (0x1fU & (vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_inst 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v0) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[1U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[2U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[3U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[4U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[5U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[6U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[7U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[8U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[9U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0xaU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0xbU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0xcU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0xdU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0xeU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0xfU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x10U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x11U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x12U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x13U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x14U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x15U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x16U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x17U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x18U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x19U] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x1aU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x1bU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x1cU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x1dU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x1eU] = 0U;
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32) {
        vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[__Vdlyvdim0__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32] 
            = __Vdlyvval__ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr__v32;
    }
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__wbu__DOT__regfile__DOT__r_gpr[0U] = 0U;
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
    vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc 
        = ((IData)(vlSelf->i_rst_n) ? (((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jump) 
                                        | ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__r_branch_taken) 
                                           & (IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_branch)))
                                        ? ((IData)(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__w_jalr)
                                            ? (0xfffffffeU 
                                               & vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum)
                                            : vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder.sum)
                                        : (((~ ((~ 
                                                 ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                  & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__sum1))) 
                                                & (~ 
                                                   ((~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__31__KET____DOT__fa__DOT__carry2)) 
                                                    & (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__30__KET____DOT__fa__DOT__carry2))))) 
                                            << 0x1fU) 
                                           | ((0x40000000U 
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
                                                                                & (~ (IData)(vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder.__PVT__gen_adders__BRA__0__KET____DOT__fa__DOT__ha1__DOT__nand_a_nand_ab)))))))))))))))))))))))))))))))))))
            : 0x80000000U);
    Vysyx_24090003_computer___024root____Vdpiimwrap_ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__set_pc_TOP(vlSelf->ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__r_pc);
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

void Vysyx_24090003_computer_adder_32bit___nba_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder__0(Vysyx_24090003_computer_adder_32bit* vlSelf);

void Vysyx_24090003_computer___024root___eval_nba(Vysyx_24090003_computer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_computer___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24090003_computer___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_24090003_computer_adder_32bit___nba_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub));
        Vysyx_24090003_computer___024root___ico_sequent__TOP__1(vlSelf);
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub));
        Vysyx_24090003_computer_adder_32bit___ico_sequent__TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder__0((&vlSymsp->TOP__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder));
        Vysyx_24090003_computer___024root___ico_sequent__TOP__2(vlSelf);
    }
}
