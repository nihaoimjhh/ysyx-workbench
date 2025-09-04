#include <am.h>
#include <nemu.h>

void __am_timer_init() {
}

// void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
//   uptime->us = 0;
// }
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  // 从 RTC_ADDR 读取时间
  uint32_t hi = inl(RTC_ADDR + 4);  // 读取高32位
  uint32_t lo = inl(RTC_ADDR + 0);  // 读取低32位
  
  // 组合成64位微秒计数
  uptime->us = ((uint64_t)hi << 32) | lo;
}
// Dhrystone 跑分为0分的原因分析
// 时间读取实现中的同步问题
// 在NEMU的timer.c实现中，存在一个重要细节：
// 关键问题：只有在读取offset为4（高32位）时才会更新时间值
// 这会导致：
// 先读低32位（此时未更新时间）
// 再读高32位（此时才更新时间）
// 组合成64位时间时，低32位和高32位不同步
void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
