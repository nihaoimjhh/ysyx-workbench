#include <verilated.h>
#include "Vysyx_24090003_cpu.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <stdio.h>

   uint32_t instructions[100] = {
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
    0b0000000'00001'00001'000'00001'00100'11, // addi x0, x0, 0
  
    0b0000000'00001'00000'000'00000'11100'11, // ebreak
    };
    int instruction_index = 0;
    int finish=0;
extern "C" void finish_simulation() {
    Verilated::gotFinish(true);
    finish=1;

}
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

    // Run simulation for 100 clock cycles
    for (int i = 0; i >-1; i++) {
  
        if(i==0){
            top->cpu_rs = 1;
        }
        else{
            top->cpu_rs = 0;
        }
        // Toggle clock
        top->cpu_clk = !top->cpu_clk;
        if(i%4==1||i%4==2){    
             top->addr_read_data = instructions[instruction_index];
            }
     
        else {
            top->addr_read_data = 0x0;
            }
        
        if(i%4==0){
              printf("addr_read_data = %s\n",std::bitset<32>(instructions[instruction_index]).to_string().c_str());
             instruction_index++;
         }
        // Print out the instruction
        // Evaluate model
        
        
        top->eval();
        // Dump trace data
        tfp->dump(i);
      if (finish==1) {
                printf("ebreak,excute %d instructions\n",instruction_index);
                break;
                 top->final();
                 // Close trace file
                tfp->close();
                // Cleanup
                delete top;
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