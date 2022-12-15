module fullF1Light (
    input logic                 clk,
    input logic                 rst,
    input logic                 trigger,
    output logic [7:0]          data_out
);

// defining internal signals, which are interconnecting wire
    logic cmd_seq;
    logic cmd_delay;
    logic en;
    logic tick;
    logic time_out;
    logic [6:0] K;

// f1_fsm module declaration
f1_fsm myF1_fsm (
    // input signals
    .clk (clk),
    .trigger (trigger),
    .en (en),
    .rst (rst),
    // output signals
    .data_out (data_out),
    .cmd_seq (cmd_seq),
    .cmd_delay (cmd_delay)
);

// mux block declaration
mux myMux (
    .s (cmd_seq),
    .d0 (time_out),
    .d1 (tick),
    .en (en)
);

// clktick module decleration
clktick myClktick (
    .N (6'd53),
    .en (cmd_seq),
    .rst (rst),
    .clk (clk),
    .tick (tick)
);

// lfsr moduel decleration
lfsr my_lfsr (
    .clk (clk),
    .K (K)
);

// delay module decleration
delay my_delay (
    .K (K),
    .trigger (cmd_delay),
    .rst (rst),
    .clk (clk),
    .time_out (time_out)
);

endmodule
