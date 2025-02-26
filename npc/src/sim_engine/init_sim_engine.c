#include <common.h>
#include "decode.h"
#include "get_elf.h"
#include "reg.h"
extern Decode s;
Vysyx_24090003_cpu* top;
VerilatedVcdC* tfp;
uint64_t dump_num = 0;
extern CPU_state cpu;
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

void init_difftest(char *ref_so_file, long img_size, int port);//放在这里是因为只有复位之后的pc才是好的，所以只能放在这里
//函数需要的全局变量，用来打印函数名字，monitor.c里面的elf_file传进来
extern char *diff_so_file;
extern long img_size;
extern int port;
extern int difftest_port;



 extern   Elf32_Ehdr ehdr;
 extern   Elf32_Shdr *shdr_pointer;
 extern   char *strtab;
 extern   char *shstrtab;
 extern   int symlens;
 extern   int symtab_index;
 extern   int strtab_index;
 extern   Elf32_Sym *symtab_pointer;
 extern int call_count;
 extern uint64_t g_nr_guest_inst ;
//函数需要的全局变量，用来打印函数名字，monitor.c里面的elf_file传进来

void init_sim_engine() {
    int i;
    printf(ANSI_COLOR_GREEN_SMALL "init simulation creat sim object\n" ANSI_COLOR_RESET);
    Verilated::traceEverOn(true);
    top = new Vysyx_24090003_cpu;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    printf("open sim.vcd to dump vcd\n");
    tfp->open("sim.vcd");
    printf(ANSI_COLOR_GREEN_SMALL "init pc \n" ANSI_COLOR_GREEN_SMALL);
    printf(ANSI_COLOR_GREEN_BIG "start simulation\n" ANSI_COLOR_RESET);
    top->cpu_clk = 0;
    for(i=0;i<3;i++){
        top->cpu_clk=!top->cpu_clk;
        top->cpu_rs = 1;
        top->eval();
        tfp->dump(dump_num++);
    }
    //之所以这里放一个itrace是因为对应上si然后和指令也对上了，所以放这里，更主要的是这个时候已经取到指，但是没写值而已也就是没有真正的执行。itrace真正工作是跟踪，所以放在这里,si执行显示的指令，很符合直觉
    init_difftest(diff_so_file, img_size, difftest_port);//so文件名字用来找函数用的
    g_nr_guest_inst ++;
    inst_print_funcname(shdr_pointer,strtab,symtab_pointer,s.cpu_inst, s.dnpc, s.pc,symlens,&call_count);
    INV(s.pc,s.cpu_inst);
    char *p = s.logbuf;
    p += snprintf(p, sizeof(s.logbuf), "0x%08""x"":", s.pc);//直接看宏展开看的照着抄
    int ilen = 4;
    uint8_t *inst = (uint8_t *)&s.cpu_inst;
    for (i = ilen - 1; i >= 0; i --) {
      p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
  
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    disassemble(p, s.logbuf + sizeof(s.logbuf) - p,s.pc, (uint8_t *)&s.cpu_inst, ilen);//为什么非得用cpu_inst,inst不行吗?事实证明不行，不知道为啥
    printf("%ld: %s\n",g_nr_guest_inst,s.logbuf);
    top->cpu_rs = 0;
}