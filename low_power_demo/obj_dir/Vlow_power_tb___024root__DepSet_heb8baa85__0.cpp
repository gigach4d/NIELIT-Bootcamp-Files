// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "Vlow_power_tb__pch.h"
#include "Vlow_power_tb___024root.h"

VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__Vtiming__0(Vlow_power_tb___024root* vlSelf);
VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__Vtiming__1(Vlow_power_tb___024root* vlSelf);

void Vlow_power_tb___024root___eval_initial(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_initial\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlow_power_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlow_power_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vlow_power_tb___024root___eval_act(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_act\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vlow_power_tb___024root___nba_sequent__TOP__0(Vlow_power_tb___024root* vlSelf);

void Vlow_power_tb___024root___eval_nba(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_nba\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vlow_power_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vlow_power_tb___024root___nba_sequent__TOP__0(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___nba_sequent__TOP__0\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__low_power_tb__DOT__count_clk_gate;
    __Vdly__low_power_tb__DOT__count_clk_gate = 0;
    CData/*3:0*/ __Vdly__low_power_tb__DOT__count_pwr_gate;
    __Vdly__low_power_tb__DOT__count_pwr_gate = 0;
    // Body
    __Vdly__low_power_tb__DOT__count_clk_gate = vlSelfRef.low_power_tb__DOT__count_clk_gate;
    __Vdly__low_power_tb__DOT__count_pwr_gate = vlSelfRef.low_power_tb__DOT__count_pwr_gate;
    if (vlSelfRef.low_power_tb__DOT__reset) {
        vlSelfRef.low_power_tb__DOT__count_base = 0U;
        __Vdly__low_power_tb__DOT__count_clk_gate = 0U;
        __Vdly__low_power_tb__DOT__count_pwr_gate = 0U;
    } else {
        vlSelfRef.low_power_tb__DOT__count_base = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.low_power_tb__DOT__count_base)));
        if (vlSelfRef.low_power_tb__DOT__enable) {
            __Vdly__low_power_tb__DOT__count_clk_gate 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.low_power_tb__DOT__count_clk_gate)));
        }
        if (vlSelfRef.low_power_tb__DOT__power_on) {
            __Vdly__low_power_tb__DOT__count_pwr_gate 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.low_power_tb__DOT__count_pwr_gate)));
        }
    }
    vlSelfRef.low_power_tb__DOT__count_clk_gate = __Vdly__low_power_tb__DOT__count_clk_gate;
    vlSelfRef.low_power_tb__DOT__count_pwr_gate = __Vdly__low_power_tb__DOT__count_pwr_gate;
}

void Vlow_power_tb___024root___timing_resume(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___timing_resume\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vlow_power_tb___024root___eval_triggers__act(Vlow_power_tb___024root* vlSelf);

bool Vlow_power_tb___024root___eval_phase__act(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_phase__act\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlow_power_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlow_power_tb___024root___timing_resume(vlSelf);
        Vlow_power_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlow_power_tb___024root___eval_phase__nba(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_phase__nba\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlow_power_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__nba(Vlow_power_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__act(Vlow_power_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlow_power_tb___024root___eval(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vlow_power_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("low_power_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vlow_power_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("low_power_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlow_power_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlow_power_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlow_power_tb___024root___eval_debug_assertions(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_debug_assertions\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
