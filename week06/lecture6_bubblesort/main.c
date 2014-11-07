#include <stdio.h>
#include <stdlib.h>
#define NUM 10

void swap(int* ptx,int *pty){
    int temp;
    temp = *ptx;
    *ptx = *pty;
    *pty=temp;
}

int main(void)
{
    int x[NUM];
    int i,j;
    printf("Before sorting\n");
    for(i=0;i<NUM;i++){
        x[i]=rand()%9;
        printf("x[%d]: %d\n",i,x[i]);
    }

    for(i=0;i<NUM;i++){
        for(j=i;j<NUM;j++){
            if(x[i]>x[j]){
                swap(&x[i],&x[j]);
            }
        }
    }

    printf("After sorting\n");
    for(i=0;i<NUM;i++){
        printf("x[%d]: %d\n",i,x[i]);
    }
    return 0;
}

