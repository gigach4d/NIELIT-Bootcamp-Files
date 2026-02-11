module jk_ff_tb;
reg reset,clk;
reg j,k;
wire q,qn;

jk_ff uut(
	.j(j),.k(k),.clk(clk),.reset(reset),
	.q(q),.qn(qn)
);

always #5 clk = ~clk;
initial begin
	$monitor($time, "\t Reset = %0b j=%0b k=%0b q=%0b qn=%0b", reset, j, k, q, qn);
end;
initial begin
	clk = 1'b0;
	reset = 1'b1;
	#10 reset = 1'b0;
	#10 j = 1'b0; k = 1'b0;
	#10 j = 1'b0; k = 1'b1;
	#10 j = 1'b1; k = 1'b0;
	#10 j = 1'b1; k = 1'b1;
	#10 j = 1'b1; k = 1'b1;
	#10 j = 1'b0; k = 1'b0;
	#20;
	$finish;
end
initial begin
	$dumpfile("jk_ff.vcd");
	$dumpvars();
end
endmodule
