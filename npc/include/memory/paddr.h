#ifndef MEMORY_PADDR_H
#define MEMORY_PADDR_H
#include "common.h"


#define MSIZE 500
#define MBASE 0x80000000
#define PMEM_LEFT  ((paddr_t)MBASE)//上界
#define PMEM_RIGHT ((paddr_t)MBASE + MSIZE - 1)//下界
#define RESET_VECTOR (PMEM_LEFT )//就是0x80000000



word_t pmem_read(paddr_t addr, int len);
word_t paddr_read(paddr_t addr, int len);
uint8_t* guest_to_host(paddr_t paddr);
int out_of_bound(paddr_t paddr );












#endif