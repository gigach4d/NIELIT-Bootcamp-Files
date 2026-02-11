// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "Vand_gate_tb__pch.h"
#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x67617465U;
    __Vtemp_1[2U] = 0x616e645fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Time=%t A=%0b | B=%0b | Out=%0b\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.and_gate_tb__DOT__a),
                 1,vlSelfRef.and_gate_tb__DOT__b,1,
                 (IData)(vlSelfRef.and_gate_tb__DOT__out));
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "and_gate_tb.v", 
                                         14);
    vlSelfRef.and_gate_tb__DOT__a = 0U;
    vlSelfRef.and_gate_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "and_gate_tb.v", 
                                         15);
    vlSelfRef.and_gate_tb__DOT__a = 0U;
    vlSelfRef.and_gate_tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "and_gate_tb.v", 
                                         16);
    vlSelfRef.and_gate_tb__DOT__a = 1U;
    vlSelfRef.and_gate_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "and_gate_tb.v", 
                                         17);
    vlSelfRef.and_gate_tb__DOT__a = 1U;
    vlSelfRef.and_gate_tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "and_gate_tb.v", 
                                         18);
    VL_FINISH_MT("and_gate_tb.v", 19, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__act(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vand_gate_tb___024root___eval_triggers__act(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_triggers__act\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.and_gate_tb__DOT__a) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__a__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.and_gate_tb__DOT__b) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__b__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.and_gate_tb__DOT__out) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__out__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__a__0 
        = vlSelfRef.and_gate_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__b__0 
        = vlSelfRef.and_gate_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__out__0 
        = vlSelfRef.and_gate_tb__DOT__out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vand_gate_tb___024root___nba_sequent__TOP__0(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___nba_sequent__TOP__0\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("Time=%t A=%0b | B=%0b | Out=%0b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.and_gate_tb__DOT__a),
                     1,vlSelfRef.and_gate_tb__DOT__b,
                     1,(IData)(vlSelfRef.and_gate_tb__DOT__out));
    }
}
