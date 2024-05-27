all: simulate

# -------------------------------------
# Testbench setup
# -------------------------------------
VERILATOR := verilator
ifdef VERILATOR_ROOT
VERILATOR := $(VERILATOR_ROOT)/bin/verilator
endif

.PHONY: verilator-version
verilator-version:
	@echo "Running $(VERILATOR) --version"
	@$(VERILATOR) --version

UVM_ROOT ?= /home/yilou/Desktop/OSVISE/uvm/uvm-verilator

# UVM_TEST ?= case0_test

VERILOG_DEFINE_FILES = ${UVM_ROOT}/src/uvm.sv ../af_pkg.sv ../af_bfm.sv ../top.sv ../../DUT/async_fifo.sv ../../DUT/empty_checker.sv ../../DUT/fifo_mem.sv ../../DUT/full_checker.sv ../../DUT/sync_2ff.sv
VERILOG_INCLUDE_DIRS = ${UVM_ROOT}/src ../../DUT ../. ../uvm_class

SV_PATHS := ../../DUT ../. ../uvm_class
SV_FILES := $(foreach path,$(SV_PATHS),$(wildcard $(path)/*svh) $(wildcard $(path)/*svh))

# -------------------------------------
# Compilation/simulation configuration
# -------------------------------------
SIM_NAME ?= top
SIM_DIR := $(SIM_NAME)-sim
COMPILE_ARGS += -DUVM_NO_DPI
COMPILE_ARGS += --prefix $(SIM_NAME) -o $(SIM_NAME)
COMPILE_ARGS += $(addprefix +incdir+, $(VERILOG_INCLUDE_DIRS))
EXTRA_ARGS += --timescale 1ns/1ps --error-limit 100
WARNING_ARGS += -Wno-lint \
	-Wno-style \
	-Wno-SYMRSVDWORD \
	-Wno-IGNOREDRETURN \
	-Wno-CONSTRAINTIGN \
	-Wno-ZERODLY


# -------------------------------------
# Make UVM test with Verilator
# -------------------------------------
$(SIM_DIR)/$(SIM_NAME).mk: $(SV_FILES)
	$(VERILATOR) --cc --exe --main --trace --trace-structs --timing -Mdir $(SIM_DIR) \
	${COMPILE_ARGS} ${EXTRA_ARGS} \
	${VERILOG_DEFINE_FILES} \
	${WARNING_ARGS}

$(SIM_DIR)/$(SIM_NAME): $(SIM_DIR)/$(SIM_NAME).mk
	$(MAKE) -j${NPROC} -C $(SIM_DIR) $(BUILD_ARGS) -f $(SIM_NAME).mk

simulate: $(SIM_DIR)/$(SIM_NAME).mk $(SIM_DIR)/$(SIM_NAME)
	$(SIM_DIR)/$(SIM_NAME)
#+UVM_TESTNAME=$(UVM_TEST) +ntb_random_seed=2345

clean:
	rm -rf simv*.daidir csrc
	rm -rf csrc* simv*
	rm -rf $(SIM_DIR)
	rm -rf dump.vcd


.PHONY: simulate clean