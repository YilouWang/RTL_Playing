// `include "uvm_pkg.sv"

module sv_tb_top;

    import uvm_pkg::*;

    import async_fifo_pkg::*;
    `include "uvm_macros.svh"

    //waveform_init wf_init();
    int seed;
    bit w_clk, r_clk;
    bit w_reset, r_reset;

    always #5 w_clk = ~w_clk;

    always #7 r_clk = ~r_clk;

    initial begin
        w_reset = 1;
        #5 w_reset = 0;
    end

    initial begin
        r_reset = 1;
        #7 r_reset = 0;
    end

    fifo_w_if wif(w_clk, w_reset);
    fifo_r_if rif(r_clk, r_reset);

    simple_demo_tb dut(
        .w_clk(wif.clk),
        .w_rst(wif.reset),
        .w_data(wif.data),
        .w_en(wif.en),
        .w_full(wif.full), // output

        .r_clk(rif.clk),
        .r_rst(rif.reset),
        .r_data(rif.data), // output
        .r_empty(rif.empty), // output
        .r_en(rif.en)
    );

    initial begin
        uvm_config_db#(virtual fifo_w_if)::set(uvm_root::get(), "*", "wif", wif);
        uvm_config_db#(virtual fifo_r_if)::set(uvm_root::get(), "*", "rif", rif);
    end

    initial begin
        if(!$value$plusargs("ntb_random_seed=%d", seed)) begin
            seed = 12345;
        end
        uvm_config_db#(int)::set(null, "uvm_test_top", "seed", seed);
        $dumpfile("new.vcd");
        $dumpvars(0, sv_tb_top);
        run_test();
    end

    always @(posedge wif.clk) begin
        $display("%2dns : top.wif.data = %2h, top.dut.w_data = %2h",$time, wif.data, dut.w_data);
        $display("%2dns : top.wif.en = %2h, top.dut.w_en = %2h",$time, wif.en, dut.w_en);
        $display("%2dns : top.wif.full = %2h, top.dut.w_full = %2h",$time, wif.full, dut.w_full);
    end

    always @(posedge rif.clk) begin
        $display("%2dns : top.rif.data = %2h, top.dut.r_data = %2h",$time, rif.data, dut.r_data);
        $display("%2dns : top.rif.en = %2h, top.dut.r_en = %2h",$time, rif.en, dut.r_en);
        $display("%2dns : top.rif.empty = %2h, top.dut.r_empty = %2h",$time, rif.empty, dut.r_empty);
    end
endmodule
/*
module waveform_init();
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, top.wif);
        $dumpvars(0, top.rif);
    end
endmodule
*/