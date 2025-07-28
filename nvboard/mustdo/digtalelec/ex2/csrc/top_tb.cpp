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
	 Verilated::traceEverOn(1);//图像所需
	 Vtop *top=new Vtop;//创建verilator所需对象，电路接口
	 VerilatedVcdC* tfp=new VerilatedVcdC();//创建图像对象，用于映射图像
	 nvboard_bind_all_pins(&dut);//nv绑定引脚
	 nvboard_init();//nv初始化
	 my_waveinit(top,tfp);//verilator产生波形需要的操作
//////////////////////////////////////////////////////////////////////////////////////////////////////////////电路仿真波形映射
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //nv仿真
     while(1) {
	 nvboard_update();//nv更新
	 dut.eval();//nv刷新
	 }
	 my_exit(top,tfp);//删除对象
	 return 0;
}

