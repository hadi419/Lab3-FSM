module f1_fsm_1s (
    input logic                 clk,    // clock
    input logic                 rst,    // reset signal
    output logic [7:0]          data_out    // output signal
);

    logic                       tick;   // interconnecting wire between clktick and f1_fsm

clktick myClktick (
    .clk (clk),
    .rst (rst),
    .en (1'b1),
    .N (6'd53),
    .tick (tick)
);

f1_fsm myF1_fsm(
    .clk (clk),
    .rst (rst),
    .en (tick),
    .data_out (data_out)
);

endmodule
