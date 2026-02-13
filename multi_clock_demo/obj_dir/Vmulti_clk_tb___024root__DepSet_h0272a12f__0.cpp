// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "Vmulti_clk_tb__pch.h"
#include "Vmulti_clk_tb___024root.h"

VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__0(Vmulti_clk_tb___024root* vlSelf);
VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__1(Vmulti_clk_tb___024root* vlSelf);
VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__2(Vmulti_clk_tb___024root* vlSelf);

void Vmulti_clk_tb___024root___eval_initial(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vmulti_clk_tb___024root___act_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf);

void Vmulti_clk_tb___024root___eval_act(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_act\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmulti_clk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmulti_clk_tb___024root___act_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___act_sequent__TOP__0\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.multi_clk_tb__DOT__muxed_clk = ((IData)(vlSelfRef.multi_clk_tb__DOT__sel)
                                               ? (IData)(vlSelfRef.multi_clk_tb__DOT__clk_slow)
                                               : (IData)(vlSelfRef.multi_clk_tb__DOT__clk_fast));
}

void Vmulti_clk_tb___024root___nba_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf);

void Vmulti_clk_tb___024root___eval_nba(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_nba\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmulti_clk_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmulti_clk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmulti_clk_tb___024root___nba_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___nba_sequent__TOP__0\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__multi_clk_tb__DOT__u_div__DOT__counter;
    __Vdly__multi_clk_tb__DOT__u_div__DOT__counter = 0;
    CData/*0:0*/ __Vdly__multi_clk_tb__DOT__clk_div4;
    __Vdly__multi_clk_tb__DOT__clk_div4 = 0;
    // Body
    __Vdly__multi_clk_tb__DOT__u_div__DOT__counter 
        = vlSelfRef.multi_clk_tb__DOT__u_div__DOT__counter;
    __Vdly__multi_clk_tb__DOT__clk_div4 = vlSelfRef.multi_clk_tb__DOT__clk_div4;
    if (vlSelfRef.multi_clk_tb__DOT__rst) {
        __Vdly__multi_clk_tb__DOT__u_div__DOT__counter = 0U;
        __Vdly__multi_clk_tb__DOT__clk_div4 = 0U;
    } else {
        __Vdly__multi_clk_tb__DOT__u_div__DOT__counter 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.multi_clk_tb__DOT__u_div__DOT__counter)));
        if ((3U == (IData)(vlSelfRef.multi_clk_tb__DOT__u_div__DOT__counter))) {
            __Vdly__multi_clk_tb__DOT__clk_div4 = (1U 
                                                   & (~ (IData)(vlSelfRef.multi_clk_tb__DOT__clk_div4)));
        }
    }
    vlSelfRef.multi_clk_tb__DOT__u_div__DOT__counter 
        = __Vdly__multi_clk_tb__DOT__u_div__DOT__counter;
    vlSelfRef.multi_clk_tb__DOT__clk_div4 = __Vdly__multi_clk_tb__DOT__clk_div4;
}

void Vmulti_clk_tb___024root___timing_resume(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___timing_resume\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmulti_clk_tb___024root___eval_triggers__act(Vmulti_clk_tb___024root* vlSelf);

bool Vmulti_clk_tb___024root___eval_phase__act(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_phase__act\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmulti_clk_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmulti_clk_tb___024root___timing_resume(vlSelf);
        Vmulti_clk_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmulti_clk_tb___024root___eval_phase__nba(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_phase__nba\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmulti_clk_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__nba(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__act(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmulti_clk_tb___024root___eval(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmulti_clk_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("multi_clk_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmulti_clk_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("multi_clk_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmulti_clk_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmulti_clk_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmulti_clk_tb___024root___eval_debug_assertions(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_debug_assertions\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
