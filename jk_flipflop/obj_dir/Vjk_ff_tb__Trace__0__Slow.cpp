// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjk_ff_tb__Syms.h"


VL_ATTR_COLD void Vjk_ff_tb___024root__trace_init_sub__TOP__0(Vjk_ff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_init_sub__TOP__0\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("jk_ff_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"qn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"qn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_init_top(Vjk_ff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_init_top\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vjk_ff_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjk_ff_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjk_ff_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_register(Vjk_ff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_register\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vjk_ff_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vjk_ff_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vjk_ff_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vjk_ff_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_const_0\n"); );
    // Init
    Vjk_ff_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjk_ff_tb___024root*>(voidSelf);
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_0_sub_0(Vjk_ff_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_full_0\n"); );
    // Init
    Vjk_ff_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjk_ff_tb___024root*>(voidSelf);
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vjk_ff_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vjk_ff_tb___024root__trace_full_0_sub_0(Vjk_ff_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root__trace_full_0_sub_0\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.jk_ff_tb__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelfRef.jk_ff_tb__DOT__clk));
    bufp->fullBit(oldp+3,(vlSelfRef.jk_ff_tb__DOT__j));
    bufp->fullBit(oldp+4,(vlSelfRef.jk_ff_tb__DOT__k));
    bufp->fullBit(oldp+5,(vlSelfRef.jk_ff_tb__DOT__q));
    bufp->fullBit(oldp+6,((1U & (~ (IData)(vlSelfRef.jk_ff_tb__DOT__q)))));
}
