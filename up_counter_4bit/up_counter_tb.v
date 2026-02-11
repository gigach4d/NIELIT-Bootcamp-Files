module up_counter_tb;
	reg clk;
	reg reset;
	wire [3:0]count;

up_counter_4bit uut(
	.clk(clk),
	.reset(reset),
	.count(count)
);

initial begin
	clk=0;
	forever #1 clk = ~clk;
end

initial begin
	$dumpfile("up_counter_4bit.vcd");
	$dumpvars();

	reset = 1;
	repeat(2) @(negedge clk);

	reset = 0;
	
	repeat(20) @(negedge clk);
	$finish;
end
always @(posedge clk)begin
	$strobe("Time = %t | Reset = %b | Count = %b |",$time,reset,count);
end
endmodule
