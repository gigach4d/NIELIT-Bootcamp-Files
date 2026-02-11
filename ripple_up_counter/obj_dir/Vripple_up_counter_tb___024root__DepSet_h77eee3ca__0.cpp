// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "Vripple_up_counter_tb__pch.h"
#include "Vripple_up_counter_tb___024root.h"

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_initial__TOP(Vripple_up_counter_tb___024root* vlSelf);
VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vripple_up_counter_tb___024root* vlSelf);
VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vripple_up_counter_tb___024root* vlSelf);

void Vripple_up_counter_tb___024root___eval_initial(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_initial\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vripple_up_counter_tb___024root___eval_initial__TOP(vlSelf);
    Vripple_up_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vripple_up_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vripple_up_counter_tb___024root___eval_act(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_act\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vripple_up_counter_tb___024root___nba_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___nba_sequent__TOP__1(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___nba_sequent__TOP__2(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___nba_sequent__TOP__3(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___nba_sequent__TOP__4(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___nba_comb__TOP__0(Vripple_up_counter_tb___024root* vlSelf);

void Vripple_up_counter_tb___024root___eval_nba(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_nba\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x48ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x28ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x7cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__1(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__1\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out3 
        = (1U & ((~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out3))));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__2(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__2\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out0 
        = (1U & ((~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out0))));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out0)));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__3(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__3\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out1 
        = (1U & ((~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out1))));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out1)));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__4(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__4\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out2 
        = (1U & ((~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out2))));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out2)));
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_comb__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_comb__TOP__0\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__q = ((((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out3) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out2) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out0)));
}

void Vripple_up_counter_tb___024root___timing_resume(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___timing_resume\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vripple_up_counter_tb___024root___eval_triggers__act(Vripple_up_counter_tb___024root* vlSelf);

bool Vripple_up_counter_tb___024root___eval_phase__act(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_phase__act\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vripple_up_counter_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vripple_up_counter_tb___024root___timing_resume(vlSelf);
        Vripple_up_counter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vripple_up_counter_tb___024root___eval_phase__nba(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_phase__nba\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vripple_up_counter_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__nba(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__act(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vripple_up_counter_tb___024root___eval(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vripple_up_counter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ripple_up_counter_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vripple_up_counter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ripple_up_counter_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vripple_up_counter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vripple_up_counter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vripple_up_counter_tb___024root___eval_debug_assertions(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_debug_assertions\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
