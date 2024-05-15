// `include "uvm_pkg.sv"

module sv_tb_top;

    import uvm_pkg::*;

    import async_fifo_pkg::*;
    `include "uvm_macros.svh"

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

    async_fifo dut(
        .w_clk(wif.clk),
        .w_rst(wif.reset),
        .w_data(wif.data),
        .w_en(wif.en),
        .w_full(wif.full),

        .r_clk(rif.clk),
        .r_rst(rif.reset),
        .r_data(rif.data),
        .r_empty(rif.empty),
        .r_en(rif.en)
    );

    initial begin
        uvm_config_db#(virtual fifo_w_if)::set(uvm_root::get(), "*", "wif", wif);
        uvm_config_db#(virtual fifo_r_if)::set(uvm_root::get(), "*", "rif", rif);
    end

    initial begin
        run_test();
    end

endmodule