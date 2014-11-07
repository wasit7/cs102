#include <stdio.h>

void show_1( int A[5] ){
    int i;
    printf("show_1(), A: ");
    for(i=1; i<5; i++) printf("%d ", A[i]);
    printf("\n");
}
void show_2( int A[] ){
    int i;
    printf("show_2(), A: ");
    for(i=1; i<5; i++) printf("%d ", A[i]);
    printf("\n");
}
void show_3( int* A ){
    int i;
    printf("show_3(), A: ");
    for(i=1; i<5; i++) printf("%d ", A[i]);
    printf("\n");
}
int main(void){
    int i, A[5];
    for(i=1; i<5; i++) A[i]=i;
    show_1(A);
    show_2(A);
    show_3(A);
}


