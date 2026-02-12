module mux2x1_tb;
reg [1:0]in;
reg sel;
wire out;

mux2x1_synth uut(
	.in(in),.sel(sel),
	.out(out)
);

initial begin
	$dumpfile("2x1_dump.vcd");
	$dumpvars();
	in = 2'b01;
	$monitor("In = %b | Sel = %b | Out = %b", in, sel, out);
	sel = 0;#5;
	sel = 1;#50;
	$finish;
end
endmodule
