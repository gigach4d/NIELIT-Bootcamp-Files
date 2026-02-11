// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux4x1_dataflow_tb__Syms.h"


void Vmux4x1_dataflow_tb___024root__trace_chg_0_sub_0(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux4x1_dataflow_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux4x1_dataflow_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_dataflow_tb___024root*>(voidSelf);
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux4x1_dataflow_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux4x1_dataflow_tb___024root__trace_chg_0_sub_0(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_chg_0_sub_0\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.mux4x1_dataflow_tb__DOT__in),4);
    bufp->chgCData(oldp+1,(vlSelfRef.mux4x1_dataflow_tb__DOT__sel),2);
    bufp->chgBit(oldp+2,((1U & ((IData)(((0U == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                         & (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in))) 
                                | ((IData)(((1U == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                            & ((IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in) 
                                               >> 1U))) 
                                   | ((IData)(((2U 
                                                == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                               & ((IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in) 
                                                  >> 2U))) 
                                      | (IData)(((3U 
                                                  == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
                                                 & ((IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__in) 
                                                    >> 3U)))))))));
}

void Vmux4x1_dataflow_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux4x1_dataflow_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_dataflow_tb___024root*>(voidSelf);
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
