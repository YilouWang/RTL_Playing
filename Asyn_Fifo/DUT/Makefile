VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --trace -Wno-UNUSED -Wno-EOFNEWLINE -Wno-LATCH
#--prof-cfuncs -CFLAGS -DVL_DEBUG

TOP_MODULE = simple_demo_tb
VERILOG_SOURCES = simple_demo_tb.sv async_fifo.sv fifo_mem.sv empty_checker.sv full_checker.sv sync_2ff.sv

SIM_TARGET = V$(TOP_MODULE)

all: $(SIM_TARGET)

$(SIM_TARGET): $(VERILOG_SOURCES) $(TOP_MODULE).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(TOP_MODULE).sv --exe $(TOP_MODULE).cpp
	make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)

clean:
	rm -rf obj_dir
	rm -f output.vcd
