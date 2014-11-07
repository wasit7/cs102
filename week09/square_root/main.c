#include <stdio.h>
#include <math.h>

void my_sqrt(float* x);
void show(float* x);

int main(void)
{
    float x[]={0,1,2,3,4,5,6};
    printf("x:");
    show(x);
    my_sqrt(x);
    printf("sqrt(x):");
    show(x);


    return 0;
}

void my_sqrt(float* x){
    int i;
    for(i=0;i<7;i++){
        x[i]=sqrt(x[i]);
    }
}
void show(float* x){
    int i;
    printf("\n[");
    for(i=0;i<7;i++){
        printf("%.3f ",x[i]);
    }
    printf("]\n");
}
