#include <stdio.h>
int x=0;//global scope
void function(){
    x=8;
    printf("In function()  x: %d\n", x);
}
void printx(){
    printf("x: %d\n", x);
}
int main(void){
    printf("main>>Global x: %d\n", x);
    x=7;
    printf("main>>Global x: %d\n", x);
    int x = 99;//local scope
    function();
    printf("main>>In main() x: %d\n", x);
    printx();
}


