// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vasync_fifo_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vasync_fifo_tb::Vasync_fifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vasync_fifo_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vasync_fifo_tb::Vasync_fifo_tb(const char* _vcname__)
    : Vasync_fifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vasync_fifo_tb::~Vasync_fifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vasync_fifo_tb___024root___eval_debug_assertions(Vasync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vasync_fifo_tb___024root___eval_static(Vasync_fifo_tb___024root* vlSelf);
void Vasync_fifo_tb___024root___eval_initial(Vasync_fifo_tb___024root* vlSelf);
void Vasync_fifo_tb___024root___eval_settle(Vasync_fifo_tb___024root* vlSelf);
void Vasync_fifo_tb___024root___eval(Vasync_fifo_tb___024root* vlSelf);

void Vasync_fifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vasync_fifo_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vasync_fifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vasync_fifo_tb___024root___eval_static(&(vlSymsp->TOP));
        Vasync_fifo_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vasync_fifo_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vasync_fifo_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vasync_fifo_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vasync_fifo_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vasync_fifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vasync_fifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vasync_fifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vasync_fifo_tb___024root___eval_final(Vasync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vasync_fifo_tb::final() {
    Vasync_fifo_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vasync_fifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vasync_fifo_tb::modelName() const { return "Vasync_fifo_tb"; }
unsigned Vasync_fifo_tb::threads() const { return 1; }
void Vasync_fifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vasync_fifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vasync_fifo_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vasync_fifo_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vasync_fifo_tb___024root__trace_init_top(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vasync_fifo_tb___024root__trace_decl_types(tracep);
    Vasync_fifo_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_register(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vasync_fifo_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vasync_fifo_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vasync_fifo_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
