module clk_mux (
  input clk0,
  input clk1,
  input sel, // select signal: 0 → clk0, 1 → clk1
  output clk_out
);
  // Output assigned based on selection (no glitch handling)
  assign clk_out = (sel == 1'b0)? clk0: clk1;
endmodule

