// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_24090003_computer.h"
#include "Vysyx_24090003_computer__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_24090003_computer::Vysyx_24090003_computer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_24090003_computer__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst_n{vlSymsp->TOP.i_rst_n}
    , __PVT__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder{vlSymsp->TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__ifu__DOT__pc_plus4_adder}
    , __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder{vlSymsp->TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder}
    , __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub{vlSymsp->TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__alu_inst__DOT__adder_sub}
    , __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder{vlSymsp->TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder}
    , __PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub{vlSymsp->TOP.__PVT__ysyx_24090003_computer__DOT__cpu__DOT__exu__DOT__pc_alu_inst__DOT__adder_sub}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_24090003_computer::Vysyx_24090003_computer(const char* _vcname__)
    : Vysyx_24090003_computer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_24090003_computer::~Vysyx_24090003_computer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_24090003_computer___024root___eval_debug_assertions(Vysyx_24090003_computer___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24090003_computer___024root___eval_static(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer___024root___eval_initial(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer___024root___eval_settle(Vysyx_24090003_computer___024root* vlSelf);
void Vysyx_24090003_computer___024root___eval(Vysyx_24090003_computer___024root* vlSelf);

void Vysyx_24090003_computer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_24090003_computer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_24090003_computer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_24090003_computer___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_24090003_computer___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_24090003_computer___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_24090003_computer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_24090003_computer::eventsPending() { return false; }

uint64_t Vysyx_24090003_computer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_24090003_computer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_24090003_computer___024root___eval_final(Vysyx_24090003_computer___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090003_computer::final() {
    Vysyx_24090003_computer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_24090003_computer::hierName() const { return vlSymsp->name(); }
const char* Vysyx_24090003_computer::modelName() const { return "Vysyx_24090003_computer"; }
unsigned Vysyx_24090003_computer::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vysyx_24090003_computer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_24090003_computer___024root__trace_init_top(Vysyx_24090003_computer___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_24090003_computer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090003_computer___024root*>(voidSelf);
    Vysyx_24090003_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_24090003_computer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_24090003_computer___024root__trace_register(Vysyx_24090003_computer___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vysyx_24090003_computer::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_24090003_computer::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_24090003_computer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
