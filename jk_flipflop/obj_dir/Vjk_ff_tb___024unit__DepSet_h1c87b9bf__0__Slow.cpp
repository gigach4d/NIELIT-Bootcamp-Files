// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "Vjk_ff_tb__pch.h"
#include "Vjk_ff_tb___024unit.h"

VL_ATTR_COLD void Vjk_ff_tb___024unit___ctor_var_reset(Vjk_ff_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vjk_ff_tb___024unit___ctor_var_reset\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__VmonitorOff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011783253012809090ull);
}
