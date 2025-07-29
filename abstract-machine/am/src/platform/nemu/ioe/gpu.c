#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

// void __am_gpu_init() {
// }
void __am_gpu_init() {
  // int i;
  // uint32_t screen_info = inl(VGACTL_ADDR);
  // int width = screen_info >> 16;  // 高16位是宽度
  // int height = screen_info & 0xffff;  // 低16位是高度

  // int w = width;  // TODO: get the correct width
  // int h = height;  // TODO: get the correct height
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = 0;
  // outl(SYNC_ADDR, 1); 
}
// void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
//   *cfg = (AM_GPU_CONFIG_T) {
//     .present = true, .has_accel = false,
//     .width = 0, .height = 0,
//     .vmemsz = 0
//   };
// }
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen_info = inl(VGACTL_ADDR);
  int width = screen_info >> 16;  // 高16位是宽度
  int height = screen_info & 0xffff;  // 低16位是高度
  
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = 0
  };
}
// void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
//   if (ctl->sync) {
//     outl(SYNC_ADDR, 1);
//   }
// }
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  uint32_t *pixels = ctl->pixels;
  
  if (pixels != NULL && w > 0 && h > 0) {
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    uint32_t screen_info = inl(VGACTL_ADDR);
    int W = screen_info >> 16;  // 屏幕宽度
    int H = screen_info & 0xffff;  // 屏幕高度
    
    for (int j = 0; j < h; j++) {
      for (int i = 0; i < w; i++) {
        if ((x + i < W) && (y + j < H)) {  // 确保在屏幕范围内
          fb[(y + j) * W + (x + i)] = pixels[j * w + i];
        }
      }
    }
  }
  
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
