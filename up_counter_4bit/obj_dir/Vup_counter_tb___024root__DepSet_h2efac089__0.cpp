// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_counter_tb.h for the primary calling header

#include "Vup_counter_tb__pch.h"
#include "Vup_counter_tb___024root.h"

VlCoroutine Vup_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vup_counter_tb___024root* vlSelf);
VlCoroutine Vup_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vup_counter_tb___024root* vlSelf);

void Vup_counter_tb___024root___eval_initial(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_initial\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vup_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vup_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vup_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.up_counter_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "up_counter_tb.v", 
                                             14);
        vlSelfRef.up_counter_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.up_counter_tb__DOT__clk)));
    }
}

void Vup_counter_tb___024root___eval_act(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_act\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vup_counter_tb___024root___nba_sequent__TOP__0(Vup_counter_tb___024root* vlSelf);
void Vup_counter_tb___024root___nba_sequent__TOP__1(Vup_counter_tb___024root* vlSelf);

void Vup_counter_tb___024root___eval_nba(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_nba\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vup_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vup_counter_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vup_counter_tb___024root___nba_sequent__TOP__0(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.up_counter_tb__DOT__count = ((IData)(vlSelfRef.up_counter_tb__DOT__reset)
                                            ? 0U : 
                                           (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.up_counter_tb__DOT__count))));
}

VL_INLINE_OPT void Vup_counter_tb___024root___nba_sequent__TOP__1(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___nba_sequent__TOP__1\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.up_counter_tb__DOT____Vstrobe0 = 1U;
}

void Vup_counter_tb___024root___timing_resume(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___timing_resume\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6984cf97__0.resume(
                                                   "@(negedge up_counter_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vup_counter_tb___024root___timing_commit(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___timing_commit\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6984cf97__0.commit(
                                                   "@(negedge up_counter_tb.clk)");
    }
}

void Vup_counter_tb___024root___eval_triggers__act(Vup_counter_tb___024root* vlSelf);

bool Vup_counter_tb___024root___eval_phase__act(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_phase__act\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vup_counter_tb___024root___eval_triggers__act(vlSelf);
    Vup_counter_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vup_counter_tb___024root___timing_resume(vlSelf);
        Vup_counter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vup_counter_tb___024root___eval_phase__nba(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_phase__nba\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vup_counter_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_tb___024root___dump_triggers__nba(Vup_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_tb___024root___dump_triggers__act(Vup_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vup_counter_tb___024root___eval_postponed(Vup_counter_tb___024root* vlSelf);

void Vup_counter_tb___024root___eval(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vup_counter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("up_counter_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vup_counter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("up_counter_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vup_counter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vup_counter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
    Vup_counter_tb___024root___eval_postponed(vlSelf);
}

#ifdef VL_DEBUG
void Vup_counter_tb___024root___eval_debug_assertions(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_debug_assertions\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
