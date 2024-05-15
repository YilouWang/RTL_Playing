interface fifo_w_if(input logic clk, reset);
    logic [7:0] data;
    logic en;
    logic full;
endinterface

interface fifo_r_if(input logic clk, reset);
    logic [7:0] data;
    logic en;
    logic empty;
endinterface