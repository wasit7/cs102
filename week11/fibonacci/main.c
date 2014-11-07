#include <stdio.h>
//Fibonacci Series
int F(int x){
    if(x==1||x==2) return 1;
    else return F(x-2)+F(x-1);

}
int S(int x){
    if(x==1) return 1;
    else return S(x-1)*S(x-1)+1;
}

int main(void)
{
    int x;
    for(x=1;x<10;x++){
        printf("S(%d)=%d\n",x,S(x));
    }
    return 0;
}

