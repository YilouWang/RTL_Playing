`ifndef AF_PKG_SV
`define AF_PKG_SV

package af_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    
    parameter FIFO_DATA_WIDTH = 8;
    parameter FIFO_MEM_ADDR_WIDTH = 4;
    parameter TEST_FLOW_LENGTH = 25;
    parameter TEST_NUM_ITER = 25;

    `include "u_sequence_item.svh"

    `include "u_sequencer.svh"
    `include "u_coverage.svh"
    `include "u_scoreboard.svh"
    `include "u_driver.svh"
    `include "u_monitor.svh"

    `include "u_env.svh"

    `include "u_sequence.svh"
    `include "u_af_base_test.svh"
    `include "u_case1_test.svh"
endpackage

`endif // AF_PKG_SV