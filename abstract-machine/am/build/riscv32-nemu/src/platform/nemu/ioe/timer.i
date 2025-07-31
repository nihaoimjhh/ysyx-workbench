# 0 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/timer.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/riscv64-linux-gnu/include/stdc-predef.h" 1 3
# 0 "<command-line>" 2
# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/timer.c"
# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 1



# 1 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stdint.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/stdint.h" 1 3 4
# 26 "/usr/riscv64-linux-gnu/include/stdint.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/riscv64-linux-gnu/include/bits/libc-header-start.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/features.h" 1 3 4
# 394 "/usr/riscv64-linux-gnu/include/features.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/features-time64.h" 1 3 4
# 20 "/usr/riscv64-linux-gnu/include/features-time64.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/wordsize.h" 1 3 4
# 21 "/usr/riscv64-linux-gnu/include/features-time64.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/timesize.h" 1 3 4
# 22 "/usr/riscv64-linux-gnu/include/features-time64.h" 2 3 4
# 395 "/usr/riscv64-linux-gnu/include/features.h" 2 3 4
# 502 "/usr/riscv64-linux-gnu/include/features.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/sys/cdefs.h" 1 3 4
# 576 "/usr/riscv64-linux-gnu/include/sys/cdefs.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/wordsize.h" 1 3 4
# 577 "/usr/riscv64-linux-gnu/include/sys/cdefs.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/long-double.h" 1 3 4
# 578 "/usr/riscv64-linux-gnu/include/sys/cdefs.h" 2 3 4
# 503 "/usr/riscv64-linux-gnu/include/features.h" 2 3 4
# 526 "/usr/riscv64-linux-gnu/include/features.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/gnu/stubs.h" 1 3 4




# 1 "/usr/riscv64-linux-gnu/include/bits/wordsize.h" 1 3 4
# 6 "/usr/riscv64-linux-gnu/include/gnu/stubs.h" 2 3 4
# 527 "/usr/riscv64-linux-gnu/include/features.h" 2 3 4
# 34 "/usr/riscv64-linux-gnu/include/bits/libc-header-start.h" 2 3 4
# 27 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/types.h" 1 3 4
# 27 "/usr/riscv64-linux-gnu/include/bits/types.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/wordsize.h" 1 3 4
# 28 "/usr/riscv64-linux-gnu/include/bits/types.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/timesize.h" 1 3 4
# 29 "/usr/riscv64-linux-gnu/include/bits/types.h" 2 3 4



# 31 "/usr/riscv64-linux-gnu/include/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;



typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;






__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;







__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
# 141 "/usr/riscv64-linux-gnu/include/bits/types.h" 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/typesizes.h" 1 3 4
# 142 "/usr/riscv64-linux-gnu/include/bits/types.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/time64.h" 1 3 4
# 143 "/usr/riscv64-linux-gnu/include/bits/types.h" 2 3 4


__extension__ typedef __uint64_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef __uint64_t __ino_t;
__extension__ typedef __uint64_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef __int64_t __off_t;
__extension__ typedef __int64_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef __uint64_t __rlim_t;
__extension__ typedef __uint64_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef __int64_t __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef __int64_t __suseconds_t;
__extension__ typedef __int64_t __suseconds64_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef int __blksize_t;




__extension__ typedef __int64_t __blkcnt_t;
__extension__ typedef __int64_t __blkcnt64_t;


__extension__ typedef __uint64_t __fsblkcnt_t;
__extension__ typedef __uint64_t __fsblkcnt64_t;


__extension__ typedef __uint64_t __fsfilcnt_t;
__extension__ typedef __uint64_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/wchar.h" 1 3 4
# 29 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4
# 1 "/usr/riscv64-linux-gnu/include/bits/wordsize.h" 1 3 4
# 30 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4




# 1 "/usr/riscv64-linux-gnu/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/riscv64-linux-gnu/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4


# 1 "/usr/riscv64-linux-gnu/include/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/riscv64-linux-gnu/include/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4



# 1 "/usr/riscv64-linux-gnu/include/bits/stdint-least.h" 1 3 4
# 25 "/usr/riscv64-linux-gnu/include/bits/stdint-least.h" 3 4
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
# 42 "/usr/riscv64-linux-gnu/include/stdint.h" 2 3 4





typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 82 "/usr/riscv64-linux-gnu/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stdint.h" 2 3 4
# 5 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 2
# 1 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stddef.h" 3 4
typedef unsigned int size_t;
# 329 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stddef.h" 3 4
typedef int wchar_t;
# 425 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stddef.h" 3 4
} max_align_t;
# 6 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 2
# 1 "/usr/lib/gcc-cross/riscv64-linux-gnu/13/include/stdbool.h" 1 3 4
# 7 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 2
# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/arch/riscv.h" 1
# 10 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/arch/riscv.h"

# 10 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/arch/riscv.h"
struct Context {

  uintptr_t mepc, mcause, gpr[32], mstatus;
  void *pdir;
};
# 8 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 2
# 16 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
typedef struct {
  void *start, *end;
} Area;


typedef struct Context Context;


typedef struct {
  enum {
    EVENT_NULL = 0,
    EVENT_YIELD, EVENT_SYSCALL, EVENT_PAGEFAULT, EVENT_ERROR,
    EVENT_IRQ_TIMER, EVENT_IRQ_IODEV,
  } event;
  uintptr_t cause, ref;
  const char *msg;
} Event;



typedef struct {
  int pgsize;
  Area area;
  void *ptr;
} AddrSpace;






extern Area heap;
void putch (char ch);
void halt (int code) __attribute__((__noreturn__));



# 52 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 3 4
_Bool 
# 52 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
        ioe_init (void);
void ioe_read (int reg, void *buf);
void ioe_write (int reg, void *buf);
# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 1
# 10 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
enum { AM_UART_CONFIG = (1) }; typedef struct { 
# 10 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 10 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present; } AM_UART_CONFIG_T;;
enum { AM_UART_TX = (2) }; typedef struct { char data; } AM_UART_TX_T;;
enum { AM_UART_RX = (3) }; typedef struct { char data; } AM_UART_RX_T;;
enum { AM_TIMER_CONFIG = (4) }; typedef struct { 
# 13 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 13 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present, has_rtc; } AM_TIMER_CONFIG_T;;
enum { AM_TIMER_RTC = (5) }; typedef struct { int year, month, day, hour, minute, second; } AM_TIMER_RTC_T;;
enum { AM_TIMER_UPTIME = (6) }; typedef struct { uint64_t us; } AM_TIMER_UPTIME_T;;
enum { AM_INPUT_CONFIG = (7) }; typedef struct { 
# 16 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 16 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present; } AM_INPUT_CONFIG_T;;
enum { AM_INPUT_KEYBRD = (8) }; typedef struct { 
# 17 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 17 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
keydown; int keycode; } AM_INPUT_KEYBRD_T;;
enum { AM_GPU_CONFIG = (9) }; typedef struct { 
# 18 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 18 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present, has_accel; int width, height, vmemsz; } AM_GPU_CONFIG_T;;
enum { AM_GPU_STATUS = (10) }; typedef struct { 
# 19 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 19 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
ready; } AM_GPU_STATUS_T;;
enum { AM_GPU_FBDRAW = (11) }; typedef struct { int x, y; void *pixels; int w, h; 
# 20 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 20 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
sync; } AM_GPU_FBDRAW_T;;
enum { AM_GPU_MEMCPY = (12) }; typedef struct { uint32_t dest; void *src; int size; } AM_GPU_MEMCPY_T;;
enum { AM_GPU_RENDER = (13) }; typedef struct { uint32_t root; } AM_GPU_RENDER_T;;
enum { AM_AUDIO_CONFIG = (14) }; typedef struct { 
# 23 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 23 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present; int bufsize; } AM_AUDIO_CONFIG_T;;
enum { AM_AUDIO_CTRL = (15) }; typedef struct { int freq, channels, samples; } AM_AUDIO_CTRL_T;;
enum { AM_AUDIO_STATUS = (16) }; typedef struct { int count; } AM_AUDIO_STATUS_T;;
enum { AM_AUDIO_PLAY = (17) }; typedef struct { Area buf; } AM_AUDIO_PLAY_T;;
enum { AM_DISK_CONFIG = (18) }; typedef struct { 
# 27 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 27 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present; int blksz, blkcnt; } AM_DISK_CONFIG_T;;
enum { AM_DISK_STATUS = (19) }; typedef struct { 
# 28 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 28 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
ready; } AM_DISK_STATUS_T;;
enum { AM_DISK_BLKIO = (20) }; typedef struct { 
# 29 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 29 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
write; void *buf; int blkno, blkcnt; } AM_DISK_BLKIO_T;;
enum { AM_NET_CONFIG = (21) }; typedef struct { 
# 30 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h" 3 4
_Bool 
# 30 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
present; } AM_NET_CONFIG_T;;
enum { AM_NET_STATUS = (22) }; typedef struct { int rx_len, tx_len; } AM_NET_STATUS_T;;
enum { AM_NET_TX = (23) }; typedef struct { Area buf; } AM_NET_TX_T;;
enum { AM_NET_RX = (24) }; typedef struct { Area buf; } AM_NET_RX_T;;
# 47 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/amdev.h"
enum {
  AM_KEY_NONE = 0,
  AM_KEY_ESCAPE, AM_KEY_F1, AM_KEY_F2, AM_KEY_F3, AM_KEY_F4, AM_KEY_F5, AM_KEY_F6, AM_KEY_F7, AM_KEY_F8, AM_KEY_F9, AM_KEY_F10, AM_KEY_F11, AM_KEY_F12, AM_KEY_GRAVE, AM_KEY_1, AM_KEY_2, AM_KEY_3, AM_KEY_4, AM_KEY_5, AM_KEY_6, AM_KEY_7, AM_KEY_8, AM_KEY_9, AM_KEY_0, AM_KEY_MINUS, AM_KEY_EQUALS, AM_KEY_BACKSPACE, AM_KEY_TAB, AM_KEY_Q, AM_KEY_W, AM_KEY_E, AM_KEY_R, AM_KEY_T, AM_KEY_Y, AM_KEY_U, AM_KEY_I, AM_KEY_O, AM_KEY_P, AM_KEY_LEFTBRACKET, AM_KEY_RIGHTBRACKET, AM_KEY_BACKSLASH, AM_KEY_CAPSLOCK, AM_KEY_A, AM_KEY_S, AM_KEY_D, AM_KEY_F, AM_KEY_G, AM_KEY_H, AM_KEY_J, AM_KEY_K, AM_KEY_L, AM_KEY_SEMICOLON, AM_KEY_APOSTROPHE, AM_KEY_RETURN, AM_KEY_LSHIFT, AM_KEY_Z, AM_KEY_X, AM_KEY_C, AM_KEY_V, AM_KEY_B, AM_KEY_N, AM_KEY_M, AM_KEY_COMMA, AM_KEY_PERIOD, AM_KEY_SLASH, AM_KEY_RSHIFT, AM_KEY_LCTRL, AM_KEY_APPLICATION, AM_KEY_LALT, AM_KEY_SPACE, AM_KEY_RALT, AM_KEY_RCTRL, AM_KEY_UP, AM_KEY_DOWN, AM_KEY_LEFT, AM_KEY_RIGHT, AM_KEY_INSERT, AM_KEY_DELETE, AM_KEY_HOME, AM_KEY_END, AM_KEY_PAGEUP, AM_KEY_PAGEDOWN,
};







typedef uint32_t gpuptr_t;

struct gpu_texturedesc {
  uint16_t w, h;
  gpuptr_t pixels;
} __attribute__((packed));

struct gpu_canvas {
  uint16_t type, w, h, x1, y1, w1, h1;
  gpuptr_t sibling;
  union {
    gpuptr_t child;
    struct gpu_texturedesc texture;
  };
} __attribute__((packed));
# 56 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 2



# 58 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 3 4
_Bool 
# 58 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
        cte_init (Context *(*handler)(Event ev, Context *ctx));
void yield (void);

# 60 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 3 4
_Bool 
# 60 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
        ienabled (void);
void iset (
# 61 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 3 4
                     _Bool 
# 61 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
                          enable);
Context *kcontext (Area kstack, void (*entry)(void *), void *arg);



# 65 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 3 4
_Bool 
# 65 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
        vme_init (void *(*pgalloc)(int), void (*pgfree)(void *));
void protect (AddrSpace *as);
void unprotect (AddrSpace *as);
void map (AddrSpace *as, void *vaddr, void *paddr, int prot);
Context *ucontext (AddrSpace *as, Area kstack, void *entry);



# 72 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h" 3 4
_Bool 
# 72 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/include/am.h"
        mpe_init (void (*entry)());
int cpu_count (void);
int cpu_current (void);
int atomic_xchg (int *addr, int newval);
# 2 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/timer.c" 2
# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/include/nemu.h" 1



# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/klib/include/klib-macros.h" 1
# 5 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/include/nemu.h" 2

# 1 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h" 1





static inline uint8_t inb(uintptr_t addr) { return *(volatile uint8_t *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t data) { *(volatile uint8_t *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }
# 22 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h"
enum { MODE_U, MODE_S, MODE_M = 3 };
# 7 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/include/nemu.h" 2
# 38 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/include/nemu.h"
extern char _pmem_start;







typedef uintptr_t PTE;
# 3 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/timer.c" 2

void __am_timer_init() {
}




void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {

  uint32_t hi = inl((0xa0000000 + 0x0000048) + 4);
  uint32_t lo = inl((0xa0000000 + 0x0000048) + 0);


  uptime->us = ((uint64_t)hi << 32) | lo;
}
# 26 "/home/jinghanhui/ysyx-workbench/abstract-machine/am/src/platform/nemu/ioe/timer.c"
void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
