#include "Vtop.h"         // 你的顶层模块名称
#include "verilated.h"    // Verilator头文件
#include "verilated_vcd_c.h" // 用于生成波形文件的头文件
#include "nvboard.h" // nv私房菜

void my_waveinit(Vtop *top,VerilatedVcdC* tfp){	
	 top->trace(tfp,5);
	 tfp->open("wave.vcd");
	 tfp->dump(0);
}
void my_refresh(Vtop *top,VerilatedVcdC* tfp,int time){
	 top->eval(); 
     tfp->dump(time); 
}
void my_exit(Vtop *top,VerilatedVcdC* tfp){
	 tfp->close();
	 delete top;
}
static TOP_NAME dut;
void nvboard_bind_all_pins(TOP_NAME* top);
int main(int argc, char** argv) {
	 int i,j,time=0;
	 Verilated::commandArgs(argc,argv);
	 Verilated::traceEverOn(1);
	 Vtop *top=new Vtop;
	 VerilatedVcdC* tfp=new VerilatedVcdC();
	 nvboard_bind_all_pins(&dut);
	 nvboard_init();
	 my_waveinit(top,tfp);
	 for(j=0;j<=3;j++){
         for(i=0;i<=255;i++){
             top->a = i;
             top->s = j;
             my_refresh(top,tfp,++time);
	     }
	 }
while(1) {
	 nvboard_update();
	 dut.eval();
	 }
	 my_exit(top,tfp);
	 return 0;
}

