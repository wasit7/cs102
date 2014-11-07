#include <stdio.h>

int main(void)
{
    float x=-1.25,f,fd;
    int i;
    for(i=0;i<10;i++){
        f=2.0f*x*x + 5.0f*x + 3.0f;
        fd=4.0f*x+5.0f;
        x=x-f/fd;
        printf("i: %03d, x: %.3f\n",i,x);
    }
    return 0;
}

