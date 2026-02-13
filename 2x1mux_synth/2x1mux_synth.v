module 2x1mux_synth(
	input [1:0]in,
	input sel,
	output out
);
initial begin
	if (~sel)
		assign out = in[0];
	else
		assign out = in[1];
end
endmodule
