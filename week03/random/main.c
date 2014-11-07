#include <stdio.h>

int main(void)
{
    int x = 0,i;

    for(i=0;i<100;i++){
        x = (x + 1000)%97;
        printf("x = %d\n",x);
    }

    return 0;
}

