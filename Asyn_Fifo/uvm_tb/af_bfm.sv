interface af_bfm;
    `ifdef VERILATOR
        import uvm_pkg::*;
        `include "uvm_macros.svh"
        parameter FIFO_DATA_WIDTH = 8;
        `include "u_sequence_item.svh"
        `include "u_monitor.svh"
    `else
    import af_pkg::*;
    `endif

    bit w_en, r_en, w_clk, r_clk, w_rst, r_rst;

    logic [FIFO_DATA_WIDTH-1:0] w_data;

    wire [FIFO_DATA_WIDTH-1:0] r_data;
    wire w_full, r_empty;

    bit rdDone;
    bit wrDone;

    integer wr_cmds;
    integer rd_cmds;

    task reset_rdwr();
    begin
        $write("%dns: bfm::Asserting reset on both read/write side\n", $time);
        w_en = 1'b0;
        w_data = '0;
        w_rst = 1'b0;
        r_en = 1'b0;
        r_rst = 1'b0;

        repeat(5) @(posedge w_clk);
        w_rst = 1'b1;
        repeat(1) @(posedge r_clk);
        #2
        r_rst = 1'b1;
        repeat(2) @(posedge r_clk);
        $write("%dns: bfm::Done asserting reset on both read/write side\n", $time);
    end
    endtask

    task push(input bit [FIFO_DATA_WIDTH-1:0] data, input bit last, input bit first);
    begin
        
        @(posedge w_clk);
        while(w_full == 1'b1) begin
            w_en = 1'b0;
            w_data = {(FIFO_DATA_WIDTH){1'b0}};
            @(posedge w_clk);
            $display("%dns : FULL FIFO", $time);
        end
        
        w_en = 1'b1;
        w_data = data;
        // $display("%dns : bfm::Pushing %h to FIFO", $time, w_data);

        if(first) begin
            @(posedge w_clk);
            $display("Frist One, longer time");
        end

        if(last) begin
            $display("Last One, Write");
            @(posedge w_clk);
            w_en = 1'b0;
            w_data = {(FIFO_DATA_WIDTH){1'b0}};
            repeat(10) @(posedge w_clk);
            wrDone = 1;
        end
    end
    endtask

    task pop(input bit last);
    begin
        @(posedge r_clk);
        while(r_empty == 1'b1) begin
            r_en = 1'b0;
            @(posedge r_clk);
        end
        r_en = 1'b1;
        if(last) begin
            $display("Last One, Read");
            @(posedge r_clk);
            r_en = 1'b0;
            repeat(10) @(posedge r_clk);
            rdDone = 1;
        end
        
    end
    endtask

    task wait_4_rdwr_done();
    begin
        while(!wrDone) begin
            @(posedge w_clk);
        end
        $display("%dns: bfm::Wr Done", $time);
        while(!rdDone) begin
            @(posedge r_clk);
        end
        $display("%dns: bfm::Rd Done", $time);
    end
    endtask

    u_input_flow_monitor i_mon_h;
    
    initial begin : i_mon_thread
        forever begin : i_mon_block
            @(posedge bfm.w_clk iff bfm.w_en);
            if(i_mon_h != null)
                i_mon_h.write_to_monitor(bfm.w_data);
            // $display("%dns: bfm::Monitoring w_data = %h", $time, bfm.w_data);
        end : i_mon_block
    end : i_mon_thread

    u_output_flow_monitor o_mon_h;

    initial begin : o_mon_thread
        forever begin : o_mon_block
            @(posedge bfm.r_clk iff bfm.r_en);
            if(o_mon_h != null)
                o_mon_h.write_to_monitor(bfm.r_data);
            // $display("%dns: bfm::Monitoring r_data = %h", $time, bfm.r_data);
        end : o_mon_block
    end : o_mon_thread

    initial begin : clock_generator
        w_clk = 1'b0;
        r_clk = 1'b0;

        fork
            forever #5ns w_clk = ~w_clk;
            forever #7ns r_clk = ~r_clk;
        join
    end : clock_generator

endinterface : af_bfm