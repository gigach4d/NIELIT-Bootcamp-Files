module and_gate_non_synth;
reg a,b;
wire y;
assign y = a&b;
initial begin
	a = 0; b = 1;
	#5 a = 1;
	$display("Y = %b",y);
end
endmodule
