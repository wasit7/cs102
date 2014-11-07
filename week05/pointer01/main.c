#include <stdio.h>

int main(void)
{
    int x=7;
    int *pt;
    pt = &x;

    printf("x:%d, pt:%p\n",x,pt);
    *pt = 0;
    printf("x:%d, pt:%p\n",x,pt);
    return 0;
}

