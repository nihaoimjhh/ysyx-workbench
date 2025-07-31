#include <am.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi = *(volatile uint32_t *)(0xa000004c);  // 读取高32位
  uint32_t lo = *(volatile uint32_t *)(0xa0000048);  // 读取低32位
  // 组合成64位微秒计数
  uptime->us = ((uint64_t)hi << 32) | lo;
}
void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
