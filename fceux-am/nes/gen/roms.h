extern const unsigned char rom_supermali_nes[];
extern unsigned int rom_supermali_nes_len;
extern const unsigned char rom_mario_nes[];
extern unsigned int rom_mario_nes_len;

struct rom {
  const char *name;
  const void *body;
  unsigned int *size;
};

struct rom roms[] = {
  { .name = "supermali", .body = rom_supermali_nes, .size = &rom_supermali_nes_len, },
  { .name = "mario", .body = rom_mario_nes, .size = &rom_mario_nes_len, },
};
int nroms = 2;
