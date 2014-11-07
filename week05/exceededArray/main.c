#include <stdio.h>

int main(void)
{
    int A[3];
    int i;
    for(i=0;i<3;i++){
        printf(" &A[%d]:%p, A[%d]: %d\n",i,&A[i],i,A[i]);
    }
    return 0;
}

