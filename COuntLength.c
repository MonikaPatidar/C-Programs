#include<stdio.h>
#include<conio.h>

void main() {
  char str[20], *pt;
  int i = 0;
  printf("Enter string");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);
}
