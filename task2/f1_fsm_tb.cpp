#include "Vf1_fsm.h"               // header for the top module 
#include "verilated.h"           // verilator header
#include "verilated_vcd_c.h"     // trace file header
#include "vbuddy.cpp"

#define MAX_SIM_CYCLE 1000000

int main(int argc, char **argv, char **env){
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    // init top level instance 
    Vf1_fsm* top = new Vf1_fsm;     // instantiate a f1_fsm module
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 00);
    tfp->open ("f1_fsm.vcd");       // open the trace file

    // init Vbuddy 
    if (vbdOpen() != 1) return(-1);
    vbdHeader("Lab3 T2:");
    vbdSetMode(1);      // setting the one-shot behaviour

    // initialise the simulation inputs, variables created inside the top module
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run the simulation for defined clock cycles
    for(simcyc = 0; simcyc < MAX_SIM_CYCLE; simcyc++){
        // dump the variables into a VCD file and toggle the clock of the module
        for(tick = 0; tick < 2; tick++){
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }

        // you can display the binary values here using the Vbuddy functions
        vbdBar(top->data_out & 0xFF);       // this function shows the value of the current number or output of the current state using the led light bar. vbdBar() takes an unsigned 8-bit integer parameter between the value 0 and 255. Therefore you must mask data_out with 0xFF.
        vbdCycle(simcyc + 1);       // report the clock count at the bottom right of the screen 

        // change the initial stimuli (initial value of the input signals)
        top->en = vbdFlag();            // go through the sequence when the flag is armed 
        top->rst = (simcyc < 2);        // end reset after 2 clock cycles

        // exit when either the simulation is finished or the q key is pressed
        if((Verilated::gotFinish()) || (vbdGetkey() == 'q'))    exit(0);
    }

    vbdClose();         // house keeping 
    tfp->close();
    exit(0);
}