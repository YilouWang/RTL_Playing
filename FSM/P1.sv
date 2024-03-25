// Generating a serial output sequence 11010101
// Using state machine... Three-Process

`timescale  1ns/1ps

module SequenceGenerator(
    input clk,
    input reset,
    output reg out
);

typedef enum reg [2:0] {
    S0 = 3'b000,
    S1 = 3'b001
    // ......
} state_t;

state_t cur_state, next_state;

// Process One : State Transition
always @(posedge clk or posedge reset) begin
    if(reset)
        cur_state <= S0;
    else
        cur_state <= next_state;
end

// Process Two : Next State Logic
always @(*) begin
    case(cur_state)
        S0: next_state = S1;
        S1: next_state = S2;
        // ......
        default: next_state = S0;
    endcase
end

// Process Three : Output Logic
always @(posedge clk) begin
    case(cur_state)
        S0: out <= 1;
        S1: out <= 1;
        S2: out <= 0;
        // ......
    endcase
end

endmodule