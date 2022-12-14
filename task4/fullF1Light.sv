module fullF1Light (
    input logic             clk,    // clock
    input logic             rst,    // reset signal
    input logic             trigger,    // trigger signal
    output logic [7:0]      data_out    // output signal
);

    // defining internal signals, which are inter connecting wires
    logic cmd_delay;    // command delay internal logic signal
    logic cmd_seq;      // command sequence internal logic signal
    logic mux_out;      // mux output logic signal
    logic tick;         // tick signal, optput from the clktick module
    logic time_out;     // time_out signal from the delay module
    logic [6:0] K;      // random number output from lfsr which causes K cycles of delay

// f1 fsm module declaration
f1_fsm myF1_fsm (
    // inputs
    .rst (rst),
    .en (mux_out),
    .trigger (trigger),
    .clk (clk),
    // outputs
    .cmd_delay (cmd_delay),
    .cmd_seq (cmd_seq),
    .data_out (data_out)
);

// mux block, switch is cmd_seq, inputs tick (1), time_out (0)

assign mux_out = cmd_seq ? tick : time_out;

// clktick module decleration
clktick myClktick (
    // inputs
    .N (6'd53),
    .en (cmd_seq),
    .rst (rst),
    .clk (clk),
    // output
    .tick (tick)
);

// delay module declaration
delay myDelay (
    //inputs
    .K (K),
    .trigger (cmd_delay),
    .rst (rst),
    .clk (clk),
    // outputs
    .time_out (time_out)
);

// lfsr module declaration
lfsr myLfsr (
    // inputs
    .clk (clk),
    // output 
    .K (K)
);

endmodule
