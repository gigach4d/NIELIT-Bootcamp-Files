// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "Vmulti_clk_tb__pch.h"
#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb___024root.h"

void Vmulti_clk_tb___024root___ctor_var_reset(Vmulti_clk_tb___024root* vlSelf);

Vmulti_clk_tb___024root::Vmulti_clk_tb___024root(Vmulti_clk_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmulti_clk_tb___024root___ctor_var_reset(this);
}

void Vmulti_clk_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmulti_clk_tb___024root::~Vmulti_clk_tb___024root() {
}
