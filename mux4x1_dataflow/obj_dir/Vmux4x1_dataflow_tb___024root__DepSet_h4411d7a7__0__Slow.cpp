// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_dataflow_tb.h for the primary calling header

#include "Vmux4x1_dataflow_tb__pch.h"
#include "Vmux4x1_dataflow_tb__Syms.h"
#include "Vmux4x1_dataflow_tb___024root.h"

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_initial__TOP(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_initial__TOP\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666c6f77U;
    __Vtemp_1[2U] = 0x64617461U;
    __Vtemp_1[3U] = 0x3478315fU;
    __Vtemp_1[4U] = 0x6d7578U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___dump_triggers__stl(Vmux4x1_dataflow_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root___eval_triggers__stl(Vmux4x1_dataflow_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root___eval_triggers__stl\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1_dataflow_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
