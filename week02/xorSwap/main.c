#include <stdio.h>

int main(void){
    int x = 7;
    int y = 112;
    printf("Before\t x=%d,\t y=%d\n",x,y);
    if(x!=y){   //if x not equal y
        x = x ^ y;
        y = y ^ x;
        x = x ^ y;
    }
    printf("After\t x=%d,\t y=%d\n",x,y);
    return 0;
}

