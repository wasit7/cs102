#include <stdio.h>

int main(void)
{
    int r,c;
    int A[2][3];
    for(r=0;r<2;r++){
        for(c=0;c<3;c++){
            A[r][c]=r*3+c;
        }
    }

    for(r=0;r<2;r++){
        printf("[");
        for(c=0;c<3;c++){
            printf(" %d ",A[r][c]);
        }
        printf("]\n");
    }
    return 0;
}

