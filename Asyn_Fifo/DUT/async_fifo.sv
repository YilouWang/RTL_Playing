

module async_fifo #(
    parameter DATA_SIZE = 8,
    parameter ADDR_SIZE  = 4
) (
    w_full, 
    w_data,
    w_en,
    w_clk,
    w_rst,

    r_en,
    r_clk,
    r_rst,
    r_data,
    r_empty
);

    output logic [DATA_SIZE-1 : 0] r_data;
    output logic                  w_full;
    output logic                  r_empty;

    input [DATA_SIZE-1 : 0]  w_data;
    input                    w_en;
    input                    w_rst;
    input                    w_clk;
    input                    r_en;
    input                    r_clk;
    input                    r_rst;

    logic [ADDR_SIZE-1 : 0]   w_addr;
    logic [ADDR_SIZE-1 : 0]   r_addr;
    logic [ADDR_SIZE : 0]     w_ptr_i;
    logic [ADDR_SIZE : 0]     r_ptr_i;
    logic [ADDR_SIZE : 0]     w_ptr_o;
    logic [ADDR_SIZE : 0]     r_ptr_o;

    sync_2ff #(ADDR_SIZE) r_sync (
        .i_ptr(r_ptr_i),
        .o_ptr(r_ptr_o),
        .clk(r_clk),
        .rst(r_rst)
    );

    sync_2ff #(ADDR_SIZE) w_sync (
        .i_ptr(w_ptr_i),
        .o_ptr(w_ptr_o),
        .clk(w_clk),
        .rst(w_rst)
    );
    
    empty_checker #(ADDR_SIZE) r_empty_checker (
        .r_clk(r_clk),
        .r_en(r_en),
        .r_rst(r_rst),
        .r_addr(r_addr),
        .r_ptr_gray(r_ptr_i),
        .w_ptr_gray(w_ptr_o),
        .r_empty(r_empty)
    );

    full_checker #(ADDR_SIZE) w_full_checker (
        .w_clk(w_clk),
        .w_rst(w_rst),
        .w_en(w_en),
        .w_full(w_full),
        .w_addr(w_addr),
        .w_ptr_gray(w_ptr_i),
        .r_ptr_gray(r_ptr_o)
    );

    fifo_mem #(ADDR_SIZE, DATA_SIZE) fifo_mem (
        .w_clk(w_clk),
        .w_en(w_en),
        .w_full(w_full),
        .w_addr(w_addr),
        .w_data(w_data),
        .r_addr(r_addr),
        .r_data(r_data)
    );

endmodule