// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux4x1_dataflow_tb__Syms.h"


VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_init_sub__TOP__0(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_init_sub__TOP__0\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("mux4x1_dataflow_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_init_top(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_init_top\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux4x1_dataflow_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux4x1_dataflow_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux4x1_dataflow_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_register(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_register\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmux4x1_dataflow_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmux4x1_dataflow_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmux4x1_dataflow_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmux4x1_dataflow_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_const_0\n"); );
    // Init
    Vmux4x1_dataflow_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_dataflow_tb___024root*>(voidSelf);
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_full_0_sub_0(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_full_0\n"); );
    // Init
    Vmux4x1_dataflow_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_dataflow_tb___024root*>(voidSelf);
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux4x1_dataflow_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux4x1_dataflow_tb___024root__trace_full_0_sub_0(Vmux4x1_dataflow_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_dataflow_tb___024root__trace_full_0_sub_0\n"); );
    Vmux4x1_dataflow_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.mux4x1_dataflow_tb__DOT__in),4);
    bufp->fullCData(oldp+2,(vlSelfRef.mux4x1_dataflow_tb__DOT__sel),2);
    bufp->fullBit(oldp+3,((1U & ((IData)(((0U == (IData)(vlSelfRef.mux4x1_dataflow_tb__DOT__sel)) 
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
