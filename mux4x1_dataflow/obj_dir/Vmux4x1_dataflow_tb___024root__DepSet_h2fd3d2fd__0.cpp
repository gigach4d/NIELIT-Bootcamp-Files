// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_dataflow_tb.h for the primary calling header

#include "Vmux4x1_dataflow_tb__pch.h"
#include "Vmux4x1_dataflow_tb___024root.h"

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_initial__TOP(Vmux4x1_dataflow_tb___024root* vlSelf);
VlCoroutine Vmux4x1_dataflow_tb___024root___eval_initial__TOP__Vtiming__0(Vmux4x1_dataflow_tb___024root* vlSelf);

void Vmux4x1_dataflow_tb___024root___eval_initial(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_initial\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux4x1_dataflow_tb___024root___eval_initial__TOP(vlSelf);
    Vmux4x1_dataflow_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmux4x1_dataflow_tb___024root___eval_initial__TOP__Vtiming__0(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("DATAFLOW 4x1 MUX TEST\n----------------------\nSEL | IN | OUT\n----------------------\n",0);
    vlSelfRef.mux4x1_dataflow_tb__DOT__in = 0xaU;
    vlSelfRef.mux4x1_dataflow_tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux4x1_dataflow_tb.v", 
                                         20);
    VL_WRITEF_NX("%b | %b | %b\n",0,2,vlSelfRef.mux4x1_dataflow_tb__DOT__sel,
                 4,(IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in),
                 1,vlSelfRef.mux4x1_dataflow_tb__DOT__out);
    vlSelfRef.mux4x1_dataflow_tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux4x1_dataflow_tb.v", 
                                         21);
    VL_WRITEF_NX("%b | %b | %b\n",0,2,vlSelfRef.mux4x1_dataflow_tb__DOT__sel,
                 4,(IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in),
                 1,vlSelfRef.mux4x1_dataflow_tb__DOT__out);
    vlSelfRef.mux4x1_dataflow_tb__DOT__sel = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux4x1_dataflow_tb.v", 
                                         22);
    VL_WRITEF_NX("%b | %b | %b\n",0,2,vlSelfRef.mux4x1_dataflow_tb__DOT__sel,
                 4,(IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in),
                 1,vlSelfRef.mux4x1_dataflow_tb__DOT__out);
    vlSelfRef.mux4x1_dataflow_tb__DOT__sel = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux4x1_dataflow_tb.v", 
                                         23);
    VL_WRITEF_NX("%b | %b | %b\n",0,2,vlSelfRef.mux4x1_dataflow_tb__DOT__sel,
                 4,(IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in),
                 1,vlSelfRef.mux4x1_dataflow_tb__DOT__out);
    VL_FINISH_MT("mux4x1_dataflow_tb.v", 24, "");
}

void Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf);

void Vmux4x1_dataflow_tb___024root___eval_act(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_act\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux4x1_dataflow_tb__DOT__out = (1U & 
                                              ((IData)(
                                                       ((0U 
                                                         == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                                        & (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in))) 
                                               | ((IData)(
                                                          ((1U 
                                                            == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                                           & ((IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in) 
                                                              >> 1U))) 
                                                  | ((IData)(
                                                             ((2U 
                                                               == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                                              & ((IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in) 
                                                                 >> 2U))) 
                                                     | (IData)(
                                                               ((3U 
                                                                 == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                                                & ((IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in) 
                                                                   >> 3U)))))));
}

void Vmux4x1_dataflow_tb___024root___eval_nba(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_nba\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmux4x1_dataflow_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux4x1_dataflow_tb___024root___timing_resume(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___timing_resume\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmux4x1_dataflow_tb___024root___eval_triggers__act(Vmux4x1_dataflow_tb___024root* vlSelf);

bool Vmux4x1_dataflow_tb___024root___eval_phase__act(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_phase__act\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux4x1_dataflow_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmux4x1_dataflow_tb___024root___timing_resume(vlSelf);
        Vmux4x1_dataflow_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux4x1_dataflow_tb___024root___eval_phase__nba(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_phase__nba\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux4x1_dataflow_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__nba(Vmux4x1_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__act(Vmux4x1_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux4x1_dataflow_tb___024root___eval(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmux4x1_dataflow_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mux4x1_dataflow_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmux4x1_dataflow_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mux4x1_dataflow_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmux4x1_dataflow_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmux4x1_dataflow_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux4x1_dataflow_tb___024root___eval_debug_assertions(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_debug_assertions\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
