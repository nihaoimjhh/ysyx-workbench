#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"                // Verilator 生成的模块类
#include "verilated_vcd_c.h"     // 用于波形跟踪
#include "verilated.h"           // Verilator 主头文件
#include <nvboard.h>

static Vtop dut;
void nvboard_bind_all_pins(Vtop* top);
static void single_cycle() {
    dut.eval();  // 仿真当前状态
}

int main(int argc, char **argv) {
     nvboard_bind_all_pins(&dut);
     nvboard_init();


     Verilated::commandArgs(argc, argv);
    // 在创建模块实例和设置波形跟踪之前，确保启用波形跟踪
     Verilated::traceEverOn(true);

     Vtop* top = new Vtop;                 // 创建 Verilog 模块的实例
     VerilatedVcdC* tfp = new VerilatedVcdC(); // （可选）用于波形跟踪
     top->trace(tfp, 99);
     tfp->open("wave.vcd");

    for (int i = 0; i < 10; i++) {
        top->a = rand() & 1;
        top->b = rand() & 1;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", top->a, top->b, top->f);
        assert(top->f == (top->a ^ top->b));
        tfp->dump(i);
    }
     delete top;
     delete tfp;

    tfp->close();    // 关闭波形文件
    while(1) {
        nvboard_update();  // 更新仿真状态
       single_cycle();    // 执行一个仿真周期
    }
    return 0;
}

