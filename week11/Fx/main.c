#include <stdio.h>
float F(float x, int n){
    if(n==0) return x;
    else return 2*F(x,n-1);
}

int main(){
    float x=3;
    int n=2;
    printf("F(%.2f,%d)=%.2f\n",x ,n, F(x,n) );
    return 0;
}
