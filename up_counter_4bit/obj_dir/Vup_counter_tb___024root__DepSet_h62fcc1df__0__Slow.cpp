// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_counter_tb.h for the primary calling header

#include "Vup_counter_tb__pch.h"
#include "Vup_counter_tb__Syms.h"
#include "Vup_counter_tb___024root.h"

VL_ATTR_COLD void Vup_counter_tb___024root___eval_postponed__TOP(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_postponed__TOP\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.up_counter_tb__DOT____Vstrobe0))) {
        VL_WRITEF_NX("Time = %t | Reset = %b | Count = %b |\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.up_counter_tb__DOT__reset),
                     4,vlSelfRef.up_counter_tb__DOT__count);
        vlSelfRef.up_counter_tb__DOT____Vstrobe0 = 0U;
    }
}
