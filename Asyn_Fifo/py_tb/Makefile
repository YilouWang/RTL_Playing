CWD=$(shell pwd)
export COCOTB_REDUCED_LOG_FMT = 1
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES =$(CWD)/../DUT/simple_demo_tb.sv $(CWD)/../DUT/async_fifo.sv $(CWD)/../DUT/fifo_mem.sv $(CWD)/../DUT/full_checker.sv $(CWD)/../DUT/sync_2ff.sv $(CWD)/../DUT/empty_checker.sv

EXTRA_ARGS += --trace --trace-structs
ifeq ($(SIM), verilator)
    # Enable processing of #delay statements
    COMPILE_ARGS += --timing
endif
MODULE := testbench
TOPLEVEL = simple_demo_tb
GHDL_ARGS := --ieee=synopsys
COCOTB_HDL_TIMEUNIT = 1us
COCOTB_HDL_TIMEPRECISION = 1us
include $(shell cocotb-config --makefiles)/Makefile.sim
include ./cleanall.mk
