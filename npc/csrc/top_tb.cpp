#include <verilated.h>
#include "Vysyx_24090003_cpu.h"
#include "verilated_vcd_c.h"
int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vysyx_24090003_cpu* top = new Vysyx_24090003_cpu;

    // Initialize trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sim.vcd");

    // Initialize simulation inputs
    top->cpu_clk = 0;
    top->cpu_rs = 1;
    top->addr_read_data = 0x100113; // 32'b00000000000000010010000100010011

    // Run simulation for 100 clock cycles
    for (int i = 0; i < 100; i++) {
        // Toggle clock
        top->cpu_clk = !top->cpu_clk;

        // Evaluate model
        top->eval();

        // Dump trace data
        tfp->dump(i);

        // Release reset after 10 cycles
        if (i == 2) {
            top->cpu_rs = 0;
        }
    }

    // Final model cleanup
    top->final();

    // Close trace file
    tfp->close();

    // Cleanup
    delete top;
    return 0;
}