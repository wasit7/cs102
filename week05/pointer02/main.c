#include <stdio.h>

int main(void)
{
    int x[5];
    int *pt;
    int i;
    for(i=0;i<5;i++){
        x[i]=i*i;
    }

    pt=x;
    for(i=0;i<5;i++){
        printf("%d\n",*(pt++));
    }

    return 0;
}

