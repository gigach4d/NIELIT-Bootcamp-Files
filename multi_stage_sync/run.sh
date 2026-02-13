verilator --binary -j 0 -Wall sync2_stage.v sync3_stage.v sync_tb.v --top sync_tb --timing --CFLAGS "-std=c++20" --trace
cd obj_dir || { echo "obj_dir not found"; exit 1; }
make -f Vsync_tb.mk Vsync_tb || { echo "Compilation failed"; exit 1; }
gtkwave dump.vcd
