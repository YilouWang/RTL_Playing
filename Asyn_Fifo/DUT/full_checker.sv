`timescale 1ns/1ps
module full_checker #(
    ADDR_SIZE = 4
) (
    w_en,
    w_clk,
    w_rst,
    w_full,
    w_addr,
    w_ptr_gray,
    r_ptr_gray
);

input [ADDR_SIZE : 0] r_ptr_gray; // from sync from empty
input w_clk;
input w_rst;
input w_en;

output logic [ADDR_SIZE-1 : 0] w_addr;
output logic w_full;
output logic [ADDR_SIZE : 0] w_ptr_gray; // to sync to empty

logic [ADDR_SIZE : 0]   w_ptr_gray_next;
logic [ADDR_SIZE : 0]   r_ptr_gray_next;
logic                   w_full_tmp;
//logic [ADDR_SIZE-1 : 0] w_addr_tmp;
logic [ADDR_SIZE : 0]   w_ptr_bin;
logic [ADDR_SIZE : 0]   w_ptr_bin_next;


always @(posedge w_clk or negedge w_rst) begin
    if(!w_rst) begin
        // w_addr     <= 0;
        w_ptr_gray <= 0;
        w_full     <= 0;
        w_ptr_bin  <= 0;
    end
    else begin
        // w_addr      <= w_addr_tmp;
        w_ptr_gray  <= w_ptr_gray_next;
        w_full      <= w_full_tmp;
        w_ptr_bin   <= w_ptr_bin_next;
    end
end

always @* begin
    // w_addr_tmp = w_ptr_bin[ADDR_SIZE-1 : 0]; // current address
    w_addr = w_ptr_bin[ADDR_SIZE-1 : 0];
    w_ptr_bin_next = w_ptr_bin + ({4'b0000, !w_full} & {4'b0000, w_en}); // move the w_ptr
    w_ptr_gray_next = w_ptr_bin_next ^ (w_ptr_bin_next >> 1); //convert to gray code
    r_ptr_gray_next = {~r_ptr_gray[ADDR_SIZE : ADDR_SIZE-1], r_ptr_gray[ADDR_SIZE-2 : 0]};
    if(w_ptr_gray_next == r_ptr_gray_next) begin
        w_full_tmp = 1;
    end
    else begin
        w_full_tmp = 0;
    end
end

endmodule