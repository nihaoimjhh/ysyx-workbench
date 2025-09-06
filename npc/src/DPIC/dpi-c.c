#include <common.h>
#include <cpu.h>
#include "decode.h"
#include "paddr.h"
#include <stdio.h>
#include <sys/time.h>
#include "difftest.h"
extern NPCState npc_state;
extern CPU_state cpu;
extern Decode s;
extern uint64_t dump_num;
extern Vysyx_24090003_computer *top;
extern VerilatedFstC *tfp;
// 获取当前时间的微秒值
static uint64_t get_time();
static uint64_t get_time_internal();
static uint64_t boot_time = 0;
void log_device_access(const char* device_name, paddr_t addr, word_t data, int is_write);
extern "C" void finish_simulation()
{
     Verilated::gotFinish(true);
     npc_state.state = NPC_END;
     NPCTRAP(s.pc, cpu.gpr[10]);
     tfp->dump(dump_num++);
     top->final();
     tfp->close();
     // cpu要top->eval();还要dump，直接删了会导致报错，并且无法用finish判断有点奇怪
}
extern "C" void set_gpr(int index, word_t value)
{
     if (index >= 0 && index < 16)
     {
          cpu.gpr[index] = value;
     }
}
extern "C" void set_csr(int addr, int value)
{
     if (addr == 0x300)
          cpu.mstatus = value;
     else if (addr == 0x305)
          cpu.mtvec = value;
     else if (addr == 0x341)
          cpu.mepc = value;
     else if (addr == 0x342)
          cpu.mcause = value;
}
extern "C" void set_inst(word_t value)
{
     s.cpu_inst = value;
}
extern "C" void set_pc(vaddr_t value)
{
     s.pc = value;
     cpu.pc = value;
}
extern "C" void set_dnpc(vaddr_t value)
{
     s.dnpc = value;
}
// extern "C" int cpu_pmem_read(paddr_t addr)
// {
//      if (addr == 0xa0000048 || addr == 0xa000004c)
//      {
//           uint64_t us = get_time();
//           uint32_t result;
//           if (addr == 0xa0000048)
//                result = (uint32_t)us;
//           else
//                result = (uint32_t)(us >> 32);
          
//           // 添加RTC外设访问追踪
//           log_device_access("RTC", addr, result, 0);
//           difftest_skip_ref();
//           return result;
//      }
//      else
//      {
//           uint32_t result = paddr_read(addr, 4);
//           return result;
//      }
// }
static uint32_t rtc_buf[2] = {0};

extern "C" int cpu_pmem_read(paddr_t addr)
{
     if (addr == 0xa0000048 || addr == 0xa000004c)
     {
          uint32_t offset = addr - 0xa0000048;
          
          // 只有读取高位(offset==4)时才更新时间
          if (offset == 4) {
               uint64_t us = get_time();
               rtc_buf[0] = (uint32_t)us;        // 低32位
               rtc_buf[1] = (uint32_t)(us >> 32); // 高32位
          }
          
          uint32_t result = rtc_buf[offset / 4];
          
          // 添加RTC外设访问追踪
          log_device_access("RTC", addr, result, 0);
          difftest_skip_ref();
          return result;
     }
     else
     {
          uint32_t result = paddr_read(addr, 4);
          return result;
     }
}
extern "C" void cpu_pmem_write(paddr_t addr, word_t data, uint8_t wmask)
{

     if (addr == 0xa00003f8)
     {
          // 添加串口外设访问追踪
          log_device_access("Serial", addr, data, 1);

          static int counter = 0;
          counter++;
          if (counter == 3)
          { // 每三次访问输出一次
               putchar((char)data);
               counter = 0; // 重置计数器
          }
          fflush(stdout);
          difftest_skip_ref();
     }
     else
     {
          if (wmask == 0x4)
          {
               paddr_write(addr, data, 4);
          }
          else if (wmask == 0x2)
               paddr_write(addr, data, 2);
          else if (wmask == 0x1)
               paddr_write(addr, data, 1);
          else
          {

               printf("mask error %x\n", wmask);
               npc_state.state = NPC_ABORT;
          }
     }
}
extern "C" void inst_not_found(uint8_t flag, uint8_t rst)
{
     if (flag == 0xff && rst == 0xff)
     {
          printf(ANSI_COLOR_RED_BIG ".---------------------------------------------------------.\n| ___           _                   _   _                 |\n||_ _|_ __  ___| |_ _ __ _   _  ___| |_(_) ___  _ __      |\n| | || '_ \\/ __| __| '__| | | |/ __| __| |/ _ \\| '_ \\     |\n| | || | | \\__ \\ |_| |  | |_| | (__| |_| | (_) | | | |    |\n||___|_| |_|___/\\__|_|   \\__,_|\\___|\\__|_|\\___/|_| |_|    |\n|             _             __                       _    |\n| _ __   ___ | |_          / _| ___  _   _ _ __   __| |   |\n|| '_ \\ / _ \\| __|        | |_ / _ \\| | | | '_ \\ / _` |   |\n|| | | | (_) | |_         |  _| (_) | |_| | | | | (_| |   |\n||_| |_|\\___/ \\__|        |_|  \\___/ \\__,_|_| |_|\\__,_|   |\n'---------------------------------------------------------' \n" ANSI_COLOR_RESET);
          npc_state.state = NPC_ABORT;
          return;
     }
}
uint64_t get_time()
{
     if (boot_time == 0)
          boot_time = get_time_internal();
     uint64_t now = get_time_internal();
     return now - boot_time;
}
static uint64_t get_time_internal()
{
     struct timespec now;
     clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
     uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
     return us;
     //   struct timeval now;
     //   gettimeofday(&now, NULL);
     //   uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
     //   return us;
}
// 异常追踪 - 使用红色显示异常调用
 extern "C" void log_exception_trace(word_t cause, vaddr_t epc, vaddr_t target) {
#if ENABLE_ETRACE
  // 仅追踪11号异常 (ECALL from M-mode)
  if (cause == 11) {
    static int counter = 0;
    counter++;
    if (counter == 3) { // 每三次调用输出一次
      printf(ANSI_COLOR_RED_BIG "[etrace] Exception:Environment call from M-mode (cause = %u), epc =  0x%08x, target = 0x%08x\n" ANSI_COLOR_RESET,
            cause, epc, target);
      counter = 0; // 重置计数器
    }
  }
#endif
}

// 异常返回追踪 - 使用绿色显示异常返回
extern "C" void log_exception_return(word_t cause, vaddr_t ret_addr) {
#if ENABLE_ETRACE
  // 仅追踪从11号异常返回
  if (cause == 11) {
    static int counter = 0;
    counter++;
    if (counter == 3) { // 每三次调用输出一次
      printf(ANSI_COLOR_GREEN_BIG "[etrace] Return from Environment call from M-mode exception to 0x%08x\n" ANSI_COLOR_RESET,
       ret_addr);
      counter = 0; // 重置计数器
    }
  }
#endif
}

// 外设访问追踪 - 使用蓝色显示外设访问
void log_device_access(const char* device_name, paddr_t addr, word_t data, int is_write) {
#if ENABLE_DTRACE
  static int counter = 0;
  counter++;
  if (counter == 3) { // 每三次访问输出一次
    if (is_write) {
      printf( ANSI_COLOR_RED_BIG"[dtrace] Write to %s: addr = 0x%08x, data = 0x%08x\n" ANSI_COLOR_RESET,
             device_name, addr, data);
    } else {
      printf( ANSI_COLOR_BLUE_BIG"[dtrace] Read from %s: addr = 0x%08x, data = 0x%08x\n" ANSI_COLOR_RESET,
             device_name, addr, data);
    }
    counter = 0; // 重置计数器
  }
#endif
}