#include <stdio.h>

int main(void)
{
    char c[]="point_and_array";
    char x,y;
    char *p;
    p=&c[5];
    x=p[1];
    y=p[8];
    printf("x=%c,y=%c\n",x,y);
    return 0;
}

