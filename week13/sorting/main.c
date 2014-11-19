#include <stdio.h>

int main(void)
{
    int n=3;
    int A[n];
    int i,j,temp;
    A[0]=3;
    A[1]=2;
    A[2]=1;

    printf("\nA: ");
    for(i=0;i<n;i++){
        printf(" %d",A[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           if(A[j]<A[i]){
               temp=A[j];
               A[j]=A[i];
               A[i]=temp;
           }
        }
    }

    printf("\nA: ");
    for(i=0;i<n;i++){
        printf(" %d",A[i]);
    }

    return 0;
}

