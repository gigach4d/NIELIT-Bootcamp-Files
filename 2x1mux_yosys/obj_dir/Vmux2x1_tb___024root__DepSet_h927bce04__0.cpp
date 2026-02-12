// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2x1_tb.h for the primary calling header

#include "Vmux2x1_tb__pch.h"
#include "Vmux2x1_tb__Syms.h"
#include "Vmux2x1_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux2x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux2x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x3278315fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->mux2x1_tb__DOT__in = 1U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->mux2x1_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux2x1_tb.v", 
                                       16);
    vlSelf->mux2x1_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "mux2x1_tb.v", 
                                       17);
    VL_FINISH_MT("mux2x1_tb.v", 18, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux2x1_tb___024root___dump_triggers__act(Vmux2x1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux2x1_tb___024root___eval_triggers__act(Vmux2x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux2x1_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmux2x1_tb___024root___act_sequent__TOP__0(Vmux2x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("In = %b | Sel = %b | Out = %b\n",
                  2,vlSelf->mux2x1_tb__DOT__in,1,(IData)(vlSelf->mux2x1_tb__DOT__sel),
                  1,(1U & ((IData)(vlSelf->mux2x1_tb__DOT__sel)
                            ? ((IData)(vlSelf->mux2x1_tb__DOT__in) 
                               >> 1U) : (IData)(vlSelf->mux2x1_tb__DOT__in))));
    }
}
