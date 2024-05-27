// `timescale 1ns/1ps
module fifo_mem #(
    parameter ADDR_SIZE = 4,
    parameter DATA_SIZE = 8
) (
    output logic [DATA_SIZE-1 : 0] r_data,
    input [ADDR_SIZE-1 : 0] r_addr,
    input [DATA_SIZE-1 : 0] w_data,
    input w_en,
    input w_clk,
    input w_full,
    input [ADDR_SIZE-1 : 0] w_addr
);

    localparam DEPTH = 1 << ADDR_SIZE;
    logic [DATA_SIZE-1 : 0] fifo_data [0 : DEPTH-1];

    //always @(posedge w_clk) begin
    always @(*) begin
        if(w_en && !w_full) begin
            fifo_data[w_addr] = w_data;
        end
    end

    always @(*) begin
        r_data = fifo_data[r_addr];
    end

endmodule