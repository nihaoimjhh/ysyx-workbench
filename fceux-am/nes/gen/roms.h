extern const unsigned char rom_Contra1_nes[];
extern unsigned int rom_Contra1_nes_len;
extern const unsigned char rom_supermali_nes[];
extern unsigned int rom_supermali_nes_len;

struct rom {
  const char *name;
  const void *body;
  unsigned int *size;
};

struct rom roms[] = {
  { .name = "Contra1", .body = rom_Contra1_nes, .size = &rom_Contra1_nes_len, },
  { .name = "supermali", .body = rom_supermali_nes, .size = &rom_supermali_nes_len, },
};
int nroms = 2;
