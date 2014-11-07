#include <stdio.h>

int main(void)
{
    int i, sum=0;
    for(i=0; i<10; i++){
        switch(i){
            case 0:
                printf("case 0 i=%d\n",i);
            case 1:
                printf("case 1 i=%d\n",i);
            case 2:
                printf("case 2 i=%d\n",i);
            case 3:
                printf("case 3 i=%d\n",i);
            case 5:
                printf("case 5 i=%d\n",i);
                sum++;
            case 4:
                printf("case 4 i=%d\n",i);
                break;
            default:
                printf("default i=%d\n",i);
                break;
        }
    }
    printf("sum = %d\n", sum);
    return 0;
}
