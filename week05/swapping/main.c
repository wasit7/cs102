#include <stdio.h>

void swap(int* ptx,int *pty){
    int temp;
    temp = *ptx;
    *ptx = *pty;
    *pty=temp;
}

int main(void)
{
    int x=7;
    int y=9;
    printf("x:%d, y:%d\n",x,y);
    swap(&x,&y);
    printf("x:%d, y:%d\n",x,y);
    return 0;
}

