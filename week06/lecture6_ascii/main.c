#include<stdio.h>

void main() {
   int i = 0;
   char ch;

   for (i = 32; i < 127; i++) {
      ch=i;
      printf("%3d: '%c'\n",i,ch);

   }
}

