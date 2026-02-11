module and_gate_tb;
	reg a;
	reg b;
	wire out;
and_gate uut(
	.a(a),.b(b),
	.out(out)
);
initial begin
	$dumpfile("and_gate.vcd");
	$dumpvars();
	$display("Time=%t A=%0b | B=%0b | Out=%0b",$time,a,b,out);
	$monitor("Time=%t A=%0b | B=%0b | Out=%0b",$time,a,b,out);
	#10;
	a = 1'b0; b = 1'b0; #10;
	a = 1'b0; b = 1'b1; #10;
	a = 1'b1; b = 1'b0; #10;
        a = 1'b1; b = 1'b1; #10;
$finish;
end
endmodule
