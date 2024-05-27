
module simple_demo_tb(
    input logic w_clk, w_rst, w_en,
    input logic r_clk, r_rst, r_en,
    input logic [7 : 0] w_data,
    output logic [7 : 0] r_data,
    output logic w_full, r_empty
);
    
    parameter DATA_SIZE = 8;
    parameter ADDR_SIZE = 4;

    async_fifo #(
        .DATA_SIZE(DATA_SIZE),
        .ADDR_SIZE(ADDR_SIZE)
    ) dut (
        .w_full(w_full),
        .w_en(w_en),
        .w_clk(w_clk),
        .w_rst(w_rst),
        .w_data(w_data),

        .r_empty(r_empty),
        .r_en(r_en),
        .r_clk(r_clk),
        .r_rst(r_rst),
        .r_data(r_data)
    );
    /*
    initial begin
        w_clk = 0;
        r_clk = 0;
        forever begin
            #5 w_clk = !w_clk;
            #7 r_clk = !r_clk;
        end
    end
    

    initial begin
        r_clk = 0;
        r_rst = 1;    
        // repeat(5) @ (posedge r_clk);
        repeat (5) #7;
        r_rst = 0;
        // repeat(5) @ (posedge r_clk);
        #35;
        r_rst = 1;
    end
    
    initial begin
        w_clk = 0;
        w_rst = 1;
        #25;
        w_rst = 0;
        #25;
        w_rst = 1;
    end

    initial begin
        logic [7 : 0] random_data;
        w_data = 0;
        w_en   = 0;
        r_en   = 0;
        for (int i=0; i<40; i++) begin
            random_data = $random % 256;
            write_data(random_data);
            if (i%2 == 0) begin
                read_data();
            end
        end

        for (int i = 0; i < 20; i++) begin
            read_data();
        end

        $finish;
    end

    task write_data;
        input [DATA_SIZE-1 : 0] data;
        begin
            // @ (posedge w_clk);
            // #5;
            wait_w_clock_cycles(1);
            if(!w_full) begin
                w_en = 1;
                w_data = data;
            end
            //@(posedge w_clk);
            // #5;
            wait_w_clock_cycles(1);
            w_en = 0;
        end
    endtask

    task read_data;
        begin
            @ (posedge r_clk);
            //wait_w_clock_cycles(1);
            if(!r_empty) begin
                r_en = 1;
            end
            //@ (posedge r_clk);
            //#7;
            r_en = 0;
        end
    endtask


    // Task to wait for a specific number of clock cycles
    task wait_w_clock_cycles(input int num_cycles);
        int count;
        begin
            for (count = 0; count < num_cycles; count++) begin
                @(posedge w_clk);
            end
        end
    endtask
    */
endmodule