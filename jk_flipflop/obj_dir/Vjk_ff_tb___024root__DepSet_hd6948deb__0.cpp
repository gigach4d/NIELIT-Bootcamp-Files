// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "Vjk_ff_tb__pch.h"
#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vjk_ff_tb___024root___eval_initial__TOP__Vtiming__1(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "jk_ff_tb.v", 
                                             11);
        vlSelfRef.jk_ff_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.jk_ff_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__act(Vjk_ff_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_ff_tb___024root___eval_triggers__act(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_triggers__act\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.jk_ff_tb__DOT__j) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__j__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.jk_ff_tb__DOT__k) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__k__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.jk_ff_tb__DOT__q) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__q__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.jk_ff_tb__DOT__reset) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__reset__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.jk_ff_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__j__0 
        = vlSelfRef.jk_ff_tb__DOT__j;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__k__0 
        = vlSelfRef.jk_ff_tb__DOT__k;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__q__0 
        = vlSelfRef.jk_ff_tb__DOT__q;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__reset__0 
        = vlSelfRef.jk_ff_tb__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0 
        = vlSelfRef.jk_ff_tb__DOT__clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjk_ff_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vjk_ff_tb___024root___nba_sequent__TOP__0(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___nba_sequent__TOP__0\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)))))) {
        VL_WRITEF_NX("%20#\t Reset = %0b j=%0b k=%0b q=%0b qn=%0b\n",0,
                     64,VL_TIME_UNITED_Q(1),1,(IData)(vlSelfRef.jk_ff_tb__DOT__reset),
                     1,vlSelfRef.jk_ff_tb__DOT__j,1,
                     (IData)(vlSelfRef.jk_ff_tb__DOT__k),
                     1,vlSelfRef.jk_ff_tb__DOT__q,1,
                     (1U & (~ (IData)(vlSelfRef.jk_ff_tb__DOT__q))));
    }
}
