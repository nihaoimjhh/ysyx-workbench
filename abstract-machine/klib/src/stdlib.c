#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

// void *malloc(size_t size) {
//   // On native, malloc() will be called during initializaion of C runtime.
//   // Therefore do not call panic() here, else it will yield a dead recursion:
//   //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
// #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
//   panic("Not implemented");
// #endif
//   return NULL;
// }
static void *heap_addr = NULL;

void *malloc(size_t size) {
  // 第一次调用时初始化堆指针
  if (heap_addr == NULL) {
    extern Area heap;
    heap_addr = (void *)heap.start;
  }
  
  // 对齐内存地址 (按8字节对齐)
  size_t aligned_size = (size + 7) & ~7;
  
  // 保存当前位置用于返回
  void *ret = heap_addr;
  
  // 更新堆指针位置
  heap_addr = (void *)((char *)heap_addr + aligned_size);
  
  // 确保没有超出堆的范围
  extern Area heap;
  assert((uintptr_t)heap_addr <= (uintptr_t)heap.end);
  
  return ret;
}

void free(void *ptr) {
  // 简单版本，不做任何事情
}
// void free(void *ptr) {
// }

#endif
