#include <stdio.h>

void setx(int *x){
    *x = 1;
}
int main(void){
    int x = 0;
    printf("Before setx(), x: %d\n", x);
    setx(&x);
    printf("After setx(),  x: %d\n", x);
}


