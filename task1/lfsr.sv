module lfsr #(
    parameter       WIDTH = 7
)(
    input logic             clk, // internal clock
    input logic             rst,    // reset button
    input logic             en,     // enable signal as instructed in the lab discription
    output logic [WIDTH-1:0]      data_out    // psudo-random output
);

    logic [WIDTH:1]             sreg;   // shift register, internal signal                 

always_ff @ (posedge clk, posedge rst)
    if (rst)    // if reset is asserted, reset the value stored in the register to 0001 like the lecture notes
        sreg <= {{WIDTH-1{1'b0}}, 1'b1};
    else if(en)
        sreg <= {sreg[WIDTH-1:1], sreg[7] ^ sreg[3]};     // otherwise perform the following concatenation

assign data_out = sreg;     // assign the value registered to the output signal

endmodule 
