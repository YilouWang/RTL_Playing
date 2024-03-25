// Detect "1101", the test sequence of input is "11101101011010", the output is a valid signal
// When detected, output is high, otherwise, it is low. Considering the sequence superposition,
// like "1101101", there are two "1101".

timescale 1ns/1ps

module DetectSequence(
    input clk,
    input reset,
    input in_bit,
    output reg valid
);

typedef enum reg [2:0] { 
    S0 = 3'b000,
    S1 = 3'b001,
    S2 = 3'b010,
    S3 = 3'b011,
    S4 = 3'b100
} state_t;

state_t cur_state, next_state;

// 1
always @(posedge clk or posedge reset) begin
    if(reset == 1)
        cur_state <= S0;
    else
        cur_state <= next_state;
end

//2
always @(*) begin
    case(cur_state)
        S0: if(in_bit == 1) next_state = S1;
        S1: begin
            if(in_bit == 1) next_state = S2;
            else next_state = S0;
        end
        S2: begin
            if(in_bit == 0) next_state = S3;
            else next_state = S2;
        end
        S3: begin
            if(in_bit == 1) next_state = S4;
            else next_state = S0;
        end
        S4: begin
            if(in_bit == 1) next_state = S2;
            else next_state = S0;
        end
        default: next_state = S0;
    endcase
end

//3
always @(posedge clk) begin
    if(reset) 
        valid <= 0;
    else if(cur_state == S4)
        valid <= 1;
    else
        valid <= 0;
end

endmodule