// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2x1_tb__Syms.h"


void Vmux2x1_tb___024root__trace_chg_0_sub_0(Vmux2x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux2x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux2x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2x1_tb___024root*>(voidSelf);
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux2x1_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux2x1_tb___024root__trace_chg_0_sub_0(Vmux2x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->mux2x1_tb__DOT__in),2);
    bufp->chgBit(oldp+1,(vlSelf->mux2x1_tb__DOT__sel));
    bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->mux2x1_tb__DOT__sel)
                                 ? ((IData)(vlSelf->mux2x1_tb__DOT__in) 
                                    >> 1U) : (IData)(vlSelf->mux2x1_tb__DOT__in)))));
}

void Vmux2x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2x1_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux2x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2x1_tb___024root*>(voidSelf);
    Vmux2x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
