module mux2x1_synth(

	input [1:0]in,
	input sel,
	output reg out
);
always @(*)begin
	if(sel)
		out = in[1];
	else
		out = in[0];
	end
	endmodule
