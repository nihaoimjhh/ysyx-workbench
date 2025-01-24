#include <memory/paddr.h>
#include <common.h>
#include <stdio.h>
#include <getopt.h>
#include <sdb.h>
#ifdef __cplusplus
extern "C" {
#endif

void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#ifdef __cplusplus
}
#endif

void init_disasm(const char *triple);
char *img_file = NULL;
long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) {
    printf("Can not open '%s'", img_file);
    return 0;
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {0          , 0                , NULL,  0 },
  };
  int o;
  printf("Parsing the command line...\n");
  while ( (o = getopt_long(argc, argv, "", table, NULL)) != -1) {
    switch (o) {
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [image]\n", argv[0]);
        exit(0);
    }
  }
  if (optind < argc) {
    img_file = argv[optind];
  } else {
    printf("Usage: %s [image]\n", argv[0]);
    return 0;
  }
  return 0;
}
void init_monitor(int argc, char *argv[]) {
  printf(ANSI_COLOR_GREEN_SMALL "Initializing the monitor...\n" ANSI_COLOR_RESET);

  parse_args(argc, argv);
  printf("Image file set to: %s\n", img_file);
  long img_size = load_img();
  printf("The image size is %ld\n", img_size);
  init_sdb();//定要初始化啊，不然正则匹配就直接崩溃,gdb还乱跳，根本不可能调出来
  init_disasm("riscv32");
}
