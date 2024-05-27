all: simulate

TOPLEVEL_MODULE = async_fifo
TESTBENCH_MODULE = top
SIMULATOR = vsim

UVM_ROOT ?=/opt/questasim/verilog_src/uvm-1.2/
#UVM_ROOT ?= ../../../../uvm-verilator
#UVM_TEST ?= case0_test
USES_DPI = 1

DPI_INCLUDE ?= /opt/questasim/include
VSIM_COV ?= -coverage

ifeq ($(USES_DPI),1)
	DPILIB_VLOG_OPT = 
	DPILIB_VSIM_OPT = -sv_lib /opt/questasim/uvm-1.2/linux_x86_64/uvm_dpi
	DPILIB_TARGET = dpi_lib$(BITS)
else
	DPILIB_VLOG_OPT = +define+UVM_NO_DPI
	DPILIB_VSIM_OPT =
	DPILIB_TARGET =
endif

LIBDIR = $(UVM_ROOT)/src/lib
LIBNAME = uvm_dpi

VERILOG_DEFINE_FILES = ${UVM_ROOT}/src/uvm_pkg.sv ../../DUT/async_fifo.sv ../../DUT/empty_checker.sv ../../DUT/fifo_mem.sv ../../DUT/full_checker.sv ../../DUT/sync_2ff.sv ../af_pkg.sv ../af_bfm.sv ../top.sv
VERILOG_INCLUDE_DIRS = ../../DUT .. ../uvm_class ${UVM_ROOT}/src

WORK_DIR = work

SV_PATH := ../../DUT .. ../uvm_class
SV_FILES := $(foreach path,$(SV_PATHS),$(wildcard $(path)/*.sv) $(wildcard $(path)/*.svh))

VSIM_OPTS = $(DPILIB_VSIM_OPT) -do "run -all; quit" -l simulate.log

ifeq ($(GUI),1)
	VSIM_OPTS += -gui
else
	VSIM_OPTS += -c
endif

VLOG_INCDIR := $(foreach dir,$(VERILOG_INCLUDE_DIRS),+incdir+$(dir))

compile: $(SV_FILES)
	$(SIMULATOR) -work $(WORK_DIR) -c -do \
	"vlib $(WORK_DIR); \
	vmap work $(WORK_DIR); \
	vlog -work $(WORK_DIR) $(VLOG_INCDIR) $(VERILOG_DEFINE_FILES); \
	quit"

simulate: compile
	$(SIMULATOR) -64 -lib $(WORK_DIR) $(TESTBENCH_MODULE) $(VSIM_OPTS) 
#+UVM_TESTNAME=$(UVM_TEST)

clean:
	rm -rf $(WORK_DIR)
	rm -f af.vcd simulate.log modelsim.ini tr_db.log transcript vsim.wlf vsim_stacktrace.vstf

.PHONY: all compile simulate clean