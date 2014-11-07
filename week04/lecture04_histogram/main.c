#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,x;
    int h0=0;
    int h1=0;
    int h2=0;
    int h3=0;
    int h4=0;

    for(i=0;i<30;i++){
        x=rand()%5;
        switch(x){
            case 0:
                h0++; break;
            case 1:
                h1++; break;
            case 2:
                h2++; break;
            case 3:
                h3++; break;
            case 4:
                h4++; break;
            default:
                break;
        }

    }
    printf("h0: %d\n",h0);
    printf("h1: %d\n",h1);
    printf("h2: %d\n",h2);
    printf("h3: %d\n",h3);
    printf("h4: %d\n",h4);

    return 0;
}

