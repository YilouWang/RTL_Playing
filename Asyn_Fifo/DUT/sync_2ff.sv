`timescale 1ns/1ps
module sync_2ff #(
    parameter ADDR_SIZE = 4
) (
    o_ptr,
    i_ptr,
    clk,
    rst
);
    input  [ADDR_SIZE : 0] i_ptr;
    output logic [ADDR_SIZE : 0] o_ptr;
    input clk;
    input rst;

    logic [ADDR_SIZE : 0] ptr_temp;

    always @(posedge clk or negedge rst) begin
        if(rst != 1) begin
            ptr_temp <= 0;
            o_ptr <= 0;
        end else begin
            ptr_temp <= i_ptr;
            o_ptr <= ptr_temp;
        end
    end
endmodule