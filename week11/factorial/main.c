#include <stdio.h>
int factorial(int x){
    if(x==0) return 1;
    else return x*factorial(x-1);
}

int main(void){
    int x=7;
    printf("%d!=%d\n",x,factorial(x));
    return 0;
}

