all: simulate
# -------------------------------------
# Testbench setup
# -------------------------------------
VERILATOR := verilator
ifdef VERILATOR_ROOT
VERILATOR := $(VERILATOR_ROOT)/bin/verilator
endif

# -------------------------------------
# Verilator-Version check
# -------------------------------------
.PHONY: verilator-version

verilator-version:
	@echo "Running $(VERILATOR) --version"
	@$(VERILATOR) --version

# -------------------------------------
# Verilate and Simulate
# -------------------------------------

VERILATOR_FLAGS = -Wall --cc --trace -Wno-UNUSED -Wno-EOFNEWLINE -Wno-LATCH
#--prof-cfuncs -CFLAGS -DVL_DEBUG

ifeq ($(json_dump),1)
	VERILATOR_FLAGS += -dump-tree-json
else
endif

TOP_MODULE = simple_demo_tb
VERILOG_SOURCES = simple_demo_tb.sv async_fifo.sv fifo_mem.sv empty_checker.sv full_checker.sv sync_2ff.sv

SIM_TARGET = V$(TOP_MODULE)

verilate: $(VERILOG_SOURCES) $(TOP_MODULE).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(TOP_MODULE).sv --exe $(TOP_MODULE).cpp
	make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)

simulate: verilate
	obj_dir/V$(TOP_MODULE)

clean:
	rm -rf obj_dir
	rm -f output.vcd
