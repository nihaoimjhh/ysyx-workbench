#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len=0;
  for(;*s!=0;s++,len++);
  return len;
}

char *strcpy(char *dst, const char *src) {
  const char *p1;
  char *p2;
  p1=src;
  p2=dst;
  for(;*p1!=0;p1++,p2++){
    *p2=*p1;
  }
  *p2=0;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  const char *p1;
  char *p2;
  p1=src;
  p2=dst;
  for(;*p2!=0;p2++);
  for(;*p1!=0;p2++,p1++){
    *p2=*p1;
  }
  *p2=0;
  return dst;

}

int strcmp(const char *s1, const char *s2) {
  int flag=0;
  const char *p1,*p2;
  p1=s1;
  p2=s2;
  for(;;p1++,p2++){
    if((*p1)==0&&(*p2)==0){
      break;
    }
   else if((*p1)==(*p2))
      continue;
   else {
      flag=*p1-*p2;
      break;
    }
   
    }
  return flag;
}

// int strncmp(const char *s1, const char *s2, size_t n) {
//   panic("Not implemented");
// }

int strncmp(const char *s1, const char *s2, size_t n) {
  if (n == 0) return 0;
  
  const char *p1 = s1;
  const char *p2 = s2;
  
  while (n > 0) {
    if (*p1 != *p2) {
      return *p1 - *p2;
    }
    
    if (*p1 == '\0') {
      // 两个字符串都结束了
      return 0;
    }
    
    p1++;
    p2++;
    n--;
  }
  
  // 已经比较了n个字符，它们都相等
  return 0;
}
void *memset(void *s, int c, size_t n) {
  unsigned char *p;
  p=( unsigned char*)s;
  for(;n>0;n--,p++){
    (*(p))=(unsigned char)c;
  }
  return s;
}

// void *memmove(void *dst, const void *src, size_t n) {
//   panic("Not implemented");
// }

// void *memcpy(void *out, const void *in, size_t n) {
//   panic("Not implemented");
// }
void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *dest = (unsigned char *)dst;
  const unsigned char *source = (const unsigned char *)src;
  
  // 处理内存区域重叠的情况
  if (dest > source && dest < source + n) {
    // 从后往前复制，防止覆盖源数据
    for (size_t i = n; i > 0; i--) {
      dest[i-1] = source[i-1];
    }
  } else {
    // 从前往后复制
    for (size_t i = 0; i < n; i++) {
      dest[i] = source[i];
    }
  }
  
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *dest = (unsigned char *)out;
  const unsigned char *source = (const unsigned char *)in;
  
  // 逐字节复制
  for (size_t i = 0; i < n; i++) {
    dest[i] = source[i];
  }
  
  return out;
}
int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *p1,*p2;
  p1=(const unsigned char*)s1;
  p2=(const unsigned char*)s2;
  int flag=0;
  for(;n>0;p1++,p2++,n--){
    if((*p1)==(*p2))
      continue;
    else if((*p1)>(*p2)){
      flag=*p1-*p2;
      break;
    }
    else {
      flag=*p1-*p2;
      break;
    }    
    }
 
  return flag;
}

#endif
