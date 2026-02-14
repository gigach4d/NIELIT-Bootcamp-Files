verilator --binary -j 0 -Wall counter_clk_gate.v counter_pwr_gate.v low_power_tb.v --top low_power_tb --timing --CFLAGS "-std=c++20" --trace
cd obj_dir
make -f Vlow_power_tb.mk Vlow_power_tb
./Vlow_power_tb
gtkwave dump.vcd
