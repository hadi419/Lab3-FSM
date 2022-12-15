module clktick #(         // module used to generate a pulse every N+1 rising eddge of clock cycles 
	parameter WIDTH = 6    // using parameter to make it adaptable
)(
  // interface signals
  input  logic             clk,      // clock 
  input  logic             rst,      // reset
  input  logic             en,       // enable signal
  input  logic [WIDTH-1:0] N,     	 // clock divided by N+1, for Dell, it is 53 decimal
  output logic  		       tick      // tick output
);

logic [WIDTH-1:0] count;              // internal counter which will count down. Count value goes from N to 0, hence the N+1 clock cycles for each tick

always_ff @ (posedge clk, posedge rst)             // flipflop, hence a state machine, the value of the clock tick and the count will be updated here after every clock cycle
    if (rst) begin
        tick <= 1'b0;                 // initially set the tick to zero
        count <= N;                   // and counter has value N
        end
    else if (en) begin                // enable signal to activate the block
	    if (count == 0) begin           // when count is 0, produce a pulse lasting for a single clock cycle and reset the value of count to N
		    tick <= 1'b1;
		    count <= N;
	        end
	    else begin                      // otherwise return 0 for the pulse and keep counting down on every posedge
		    tick <= 1'b0;
		    count <= count - 1'b1;
	        end
        end
endmodule
