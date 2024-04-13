`timescale 1ns/1ps

module empty_checker #(
    parameter ADDR_SIZE = 4
) (
    r_empty,
    r_ptr_gray,
    r_addr,
    w_ptr_gray,
    r_en,
    r_clk,
    r_rst
);

    output logic                   r_empty;
    output logic [ADDR_SIZE : 0]   r_ptr_gray;
    output logic [ADDR_SIZE-1 : 0] r_addr;

    input  [ADDR_SIZE : 0]   w_ptr_gray;
    input                    r_en;
    input                    r_clk;
    input                    r_rst;

    logic [ADDR_SIZE : 0]   r_ptr_gray_next;
    logic [ADDR_SIZE : 0]   r_ptr_bin;
    logic [ADDR_SIZE : 0]   r_ptr_bin_next;
    // logic [ADDR_SIZE-1 : 0] r_addr_tmp;
    logic                   r_empty_tmp;

    always @(posedge r_clk or negedge r_rst) begin
        if(!r_rst) begin
            r_empty    <= 1;
            r_ptr_gray <= 0;
            // r_addr     <= 0;
            r_ptr_bin  <= 0;
        end
        else begin
            r_empty     <= r_empty_tmp;
            r_ptr_gray  <= r_ptr_gray_next;
            // r_addr      <= r_addr_tmp;
            r_ptr_bin   <= r_ptr_bin_next;
        end
    end

    always @(*) begin

        // r_addr_tmp = r_ptr_bin[ADDR_SIZE-1 : 0];
        r_addr = r_ptr_bin[ADDR_SIZE-1 : 0];
        r_ptr_bin_next = r_ptr_bin + ({4'b0000, !r_empty} & {4'b0000, r_en});
        r_ptr_gray_next = r_ptr_bin_next ^ (r_ptr_bin_next >> 1);

        if(r_ptr_gray_next == w_ptr_gray) begin
            r_empty_tmp = 1;
        end
        else begin
            r_empty_tmp = 0;
        end
    end

endmodule