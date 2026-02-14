module tb;

    reg clk = 0;
    reg rst = 0;

    wire [3:0] cnt_async;
    wire [3:0] cnt_sync;
    wire rst_sync;

   // Clock
    always #5 clk = ~clk;

    // DUTs
    counter_async u_async (.clk(clk), .rst(rst), .count(cnt_async));
    reset_sync    u_sync  (.clk(clk), .rst_async(rst), .rst_sync(rst_sync));
    counter_sync  u_syncc (.clk(clk), .rst_sync(rst_sync), .count(cnt_sync));

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb);

        // Step 1: Assert reset
        rst = 1;
        #25;

        // Step 2: Deassert reset (possibly in middle of a clock cycle)
        rst = 0;
        #100;

        // Step 3: Assert/deassert reset again
        rst = 1;
        #20;
        rst = 0;

        #50;
        $finish;
    end
endmodule
