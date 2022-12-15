module lfsr #(
    parameter       WIDTH = 7
)(
    input logic             clk, // internal clock
    //input logic             rst,    // reset button
    //input logic             en,     // enable signal as instructed in the lab discription
    output logic [WIDTH-1:0]      K    // psudo-random output
);

    logic [WIDTH:1]             sreg = {{WIDTH-1{1'b0}}, 1'b1};   // shift register, internal signal                 

always_ff @ (posedge clk)
    sreg <= {sreg[WIDTH-1:1], sreg[7] ^ sreg[3]};     // otherwise perform the following concatenation

assign K = sreg;     // assign the value registered to the output signal

endmodule 
