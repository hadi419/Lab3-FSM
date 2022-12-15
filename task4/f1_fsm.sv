module f1_fsm (
    input logic                     clk,    // clock
    input logic                     rst,    // reset
    input logic                     en,     // enable 
    input logic                     trigger,    // trigger signal to start the fsm
    output logic                    cmd_seq,    // command for start of the sequence
    output logic                    cmd_delay,  // command to start the delay
    output logic [7:0]              data_out    // output 
);

    // define our states
    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8, IDLE}   F1_states;
    F1_states   current_state, next_state;

    // state registers
    always_ff @ (posedge clk, posedge rst)
        if (rst)        current_state <= S0;
        else if (en)    current_state <= next_state;

    // next state logic block
    always_comb
        case(current_state)
            S0:         if(trigger)  next_state = S1;
            S1:         next_state = S2;
            S2:         next_state = S3;
            S3:         next_state = S4;
            S4:         next_state = S5;
            S5:         next_state = S6;
            S6:         next_state = S7;
            S7:         next_state = S8;
            S8:         next_state = IDLE;
            default:    next_state = IDLE;
        endcase 
    
    // output logic for data_out 
    always_comb 
        case(current_state)
            S0:         data_out = 8'b0;
            S1:         data_out = 8'b1;
            S2:         data_out = 8'b11;
            S3:         data_out = 8'b111;
            S4:         data_out = 8'b1111;
            S5:         data_out = 8'b11111;
            S6:         data_out = 8'b111111;
            S7:         data_out = 8'b1111111;
            S8:         data_out = 8'b11111111;
            IDLE:       data_out = 8'b0;
            default:    data_out = 8'b0;
        endcase
    
    // output logic for cmd_seq
    always_comb 
    case(current_state)
        S8:             cmd_seq = 1'b0;
        default:        cmd_seq = 1'b1;
    endcase
    
    // output logic for cmd_delay
    always_comb 
    case(current_state)
        S8:             cmd_delay = 1'b1;
        default:        cmd_delay = 1'b0;
    endcase

endmodule
