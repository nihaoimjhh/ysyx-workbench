#include <memory/paddr.h>
#include <common.h>
#include <stdio.h>
#include <getopt.h>
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
    exit(0);
  }
  return 0;
}
void init_monitor(int argc, char *argv[]) {
  printf("Initializing the monitor...\n");

  parse_args(argc, argv);
  printf("Image file set to: %s\n", img_file);
  long img_size = load_img();
  printf("The image size is %ld\n", img_size);
}
