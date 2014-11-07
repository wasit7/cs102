#include <stdio.h>

int main(void){

    int r, rmax=2;
    int c, cmax=5;

    for(r=0; r<rmax; r++){
        printf("[ ");
        for(c=0; c<cmax; c++){
            printf("%d",r*cmax+c);
            if(c<cmax-1){
                printf(" , ");
            }
        }
        printf(" ]\n");
    }

    return 0;
}
