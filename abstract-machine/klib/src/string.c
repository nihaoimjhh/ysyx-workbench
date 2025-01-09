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

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p;
  p=( unsigned char*)s;
  for(;n>0;n--,p++){
    (*(p))=(unsigned char)c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
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
