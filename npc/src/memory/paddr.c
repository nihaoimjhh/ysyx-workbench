#include "common.h"
#include "paddr.h"
#include "host.h"
uint8_t pmem[MSIZE] ;
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE; }

word_t pmem_read(paddr_t addr, int len) {
      if (out_of_bound(addr))
          return 0;
      else{
          word_t ret = host_read(guest_to_host(addr), len);
          return ret;
      }
}


void pmem_write(paddr_t addr,  word_t data ,int len) {
      if (out_of_bound(addr))
        return ;
      else{
          host_write(guest_to_host(addr), len, data);
      }
}


int out_of_bound(paddr_t paddr){
     if (paddr<MBASE||paddr>MBASE+MSIZE){
        printf("\033[1;31m""invalid addr :%x\n""\033[0m",paddr);
        return 1;
     }
     else 
        return 0;
}