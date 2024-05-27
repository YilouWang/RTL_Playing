module top;
    import uvm_pkg::*;
    import af_pkg::*;
    `include "uvm_macros.svh"

    af_bfm bfm();

    async_fifo #(FIFO_DATA_WIDTH, FIFO_MEM_ADDR_WIDTH) dut(
        .w_data(bfm.w_data),
        .w_clk(bfm.w_clk),
        .w_rst(bfm.w_rst),
        .w_en(bfm.w_en),
        .w_full(bfm.w_full),

        .r_data(bfm.r_data),
        .r_clk(bfm.r_clk),
        .r_en(bfm.r_en),
        .r_empty(bfm.r_empty),
        .r_rst(bfm.r_rst)
    );

    initial begin
        uvm_config_db #(virtual af_bfm)::set(null, "*", "bfm", bfm);
        run_test("u_case1_test");
    end

    initial begin
        $dumpfile("af.vcd");
        $dumpvars();
    end
endmodule
