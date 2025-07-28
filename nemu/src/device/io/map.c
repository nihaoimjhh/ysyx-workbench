/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

//用来记录设备读写的次数
int device_read_logbuf_count=0;
int device_write_logbuf_count=0;
typedef struct device_read_logbuf{
  paddr_t addr;
  int len;
  word_t data;
  const char *name; // 设备名称
}device_read_logbuf;
typedef struct device_write_logbuf{
  paddr_t addr;
  int len;
  word_t data;
  const char *name; // 设备名称
}device_write_logbuf;
device_read_logbuf device_read_logbufs[10];
device_write_logbuf device_write_logbufs[10];
void device_read_logbuf_write(paddr_t addr, int len, word_t data, const char *name);
void device_write_logbuf_write(paddr_t addr, int len, word_t data, const char *name);
void device_read_logbuf_print();
void device_write_logbuf_print();

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read(map->space + offset, len);
  
  IFDEF(CONFIG_DTRACE, device_read_logbuf_write(addr, len, ret, map->name); device_read_logbuf_print());
  
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  
  IFDEF(CONFIG_DTRACE, device_write_logbuf_write(addr, len, data, map->name); device_write_logbuf_print());
  
  invoke_callback(map->callback, offset, len, true);
}

void device_read_logbuf_write(paddr_t addr, int len, word_t data, const char *name){
  device_read_logbuf_count%=10;
  device_read_logbufs[device_read_logbuf_count].addr=addr;
  device_read_logbufs[device_read_logbuf_count].len=len;
  device_read_logbufs[device_read_logbuf_count].data=data;
  device_read_logbufs[device_read_logbuf_count].name=name;
  device_read_logbuf_count++;
}

void device_write_logbuf_write(paddr_t addr, int len, word_t data, const char *name){
  device_write_logbuf_count%=10;
  device_write_logbufs[device_write_logbuf_count].addr=addr;
  device_write_logbufs[device_write_logbuf_count].len=len;
  device_write_logbufs[device_write_logbuf_count].data=data;
  device_write_logbufs[device_write_logbuf_count].name=name;
  device_write_logbuf_count++;
}

void device_read_logbuf_print(){
  printf("\033[1;32m" "    device_read_logbuf\n" "\033[0m"); // 绿色
  for(int i=0;i<10;i++){
    if(i==(device_read_logbuf_count-1)%10){
      printf("\033[1;31m" "===>device: %s addr:%x len:%d data:%x\n" "\033[0m",
            device_read_logbufs[i].name,
            device_read_logbufs[i].addr,
            device_read_logbufs[i].len,
            device_read_logbufs[i].data);
      continue;//上面减一是因为存完logbuf之后又加了一
    }
    printf("    device: %s addr:%x len:%d data:%x\n",
          device_read_logbufs[i].name,
          device_read_logbufs[i].addr,
          device_read_logbufs[i].len,
          device_read_logbufs[i].data);
  }
}

void device_write_logbuf_print(){
  printf("\033[1;32m" "    device_write_logbuf\n" "\033[0m"); // 绿色
  for(int i=0;i<10;i++){
    if(i==(device_write_logbuf_count-1)%10){
      printf("\033[1;31m" "===>device: %s addr:%x len:%d data:%x\n" "\033[0m",
            device_write_logbufs[i].name,
            device_write_logbufs[i].addr,
            device_write_logbufs[i].len,
            device_write_logbufs[i].data);
      continue;//上面减一是因为存完logbuf之后又加了一
    }
    printf("    device: %s addr:%x len:%d data:%x\n",
          device_write_logbufs[i].name,
          device_write_logbufs[i].addr,
          device_write_logbufs[i].len,
          device_write_logbufs[i].data);
  }
}