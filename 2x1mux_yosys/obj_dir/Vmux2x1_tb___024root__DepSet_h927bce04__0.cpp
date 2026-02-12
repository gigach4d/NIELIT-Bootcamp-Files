// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2x1_tb.h for the primary calling header

#include "Vmux2x1_tb__pch.h"
#include "Vmux2x1_tb__Syms.h"
#include "Vmux2x1_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux2x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux2x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x3278315fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.mux2x1_tb__DOT__in = 1U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.mux2x1_tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "mux2x1_tb.v", 
                                         16);
    vlSelfRef.mux2x1_tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "mux2x1_tb.v", 
                                         17);
    VL_FINISH_MT("mux2x1_tb.v", 18, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2x1_tb___024root___dump_triggers__act(Vmux2x1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux2x1_tb___024root___eval_triggers__act(Vmux2x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root___eval_triggers__act\n"); );
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.mux2x1_tb__DOT__in) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux2x1_tb__DOT__in__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.mux2x1_tb__DOT__out) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux2x1_tb__DOT__out__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.mux2x1_tb__DOT__sel) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux2x1_tb__DOT__sel__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mux2x1_tb__DOT__in__0 
        = vlSelfRef.mux2x1_tb__DOT__in;
    vlSelfRef.__Vtrigprevexpr___TOP__mux2x1_tb__DOT__out__0 
        = vlSelfRef.mux2x1_tb__DOT__out;
    vlSelfRef.__Vtrigprevexpr___TOP__mux2x1_tb__DOT__sel__0 
        = vlSelfRef.mux2x1_tb__DOT__sel;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux2x1_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmux2x1_tb___024root___nba_sequent__TOP__0(Vmux2x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root___nba_sequent__TOP__0\n"); );
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("In = %b | Sel = %b | Out = %b\n",0,
                     2,vlSelfRef.mux2x1_tb__DOT__in,
                     1,(IData)(vlSelfRef.mux2x1_tb__DOT__sel),
                     1,vlSelfRef.mux2x1_tb__DOT__out);
    }
}
