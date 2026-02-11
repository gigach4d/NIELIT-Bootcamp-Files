// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vup_counter_tb__Syms.h"


VL_ATTR_COLD void Vup_counter_tb___024root__trace_init_sub__TOP__0(Vup_counter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root__trace_init_sub__TOP__0\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("up_counter_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vup_counter_tb___024root__trace_init_top(Vup_counter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root__trace_init_top\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vup_counter_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vup_counter_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vup_counter_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vup_counter_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vup_counter_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vup_counter_tb___024root__trace_register(Vup_counter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root__trace_register\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vup_counter_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vup_counter_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vup_counter_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vup_counter_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vup_counter_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root__trace_const_0\n"); );
    // Init
    Vup_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vup_counter_tb___024root*>(voidSelf);
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vup_counter_tb___024root__trace_full_0_sub_0(Vup_counter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vup_counter_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root__trace_full_0\n"); );
    // Init
    Vup_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vup_counter_tb___024root*>(voidSelf);
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vup_counter_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vup_counter_tb___024root__trace_full_0_sub_0(Vup_counter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root__trace_full_0_sub_0\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.up_counter_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelfRef.up_counter_tb__DOT__reset));
    bufp->fullCData(oldp+3,(vlSelfRef.up_counter_tb__DOT__count),4);
}
