// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "Vjk_ff_tb__pch.h"
#include "Vjk_ff_tb__Syms.h"
#include "Vjk_ff_tb___024root.h"

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_initial__TOP(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_initial__TOP\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6b5f6666U;
    __Vtemp_1[2U] = 0x6aU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
