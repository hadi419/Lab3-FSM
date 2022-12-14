#include "VfullF1Light.h"       // header for the top module
#include "verilated.h"          // verilator header
#include "verilated_vcd_c.h"    // header for trace file
#include "vbuddy.cpp"           // Vbuddy header

#define MAX_SIM_CYCLE 1000000

int main(int argc, char **argv, char **env){
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    // initialise top level instance
    VfullF1Light* top = new VfullF1Light;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("fullF1Light.vcd");

    // init Vbuddy
    if(vbdOpen() != 1)  return(-1);
    vbdHeader("L3T4: full F1 light");
    vbdSetMode(1);

    // initialise the initial stimuli
    top->clk = 1;
    top->rst = 1;               // start on a reset
    top->trigger = vbdFlag();   // trigger is using the flag value

    // run the simulation for MAX_SIM_CYC clock cycles
    for(simcyc = 0; simcyc < MAX_SIM_CYCLE; simcyc++){
        // dump variables into a trace file and toggle the clock
        for(tick = 0; tick < 2; tick++){
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }

        // displaying happens here
        vbdInitWatch();
        vbdElapsed();

        // changing the initial stimuli
        top->rst = (simcyc < 2);
        top->trigger = vbdFlag();

        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))     exit(0);
    }

    vbdClose();         // housekeeping
    tfp->close();
    exit(0);
}