#include <stdio.h>
void printBin(int x)
{
    int i;
    printf("binary :");
    for(i=0;i<32;i++)
    {
        if((i%4)==0) printf(" ");
        if(x&(1<<(31-i))){
            printf("1");
        }else{
            printf("0");
        }
    }
    printf("\n");

}

int main(void)
{
    int x;
    printf("please enter an integer: ");
    scanf("%d",&x);

    printf("integer : %d\n",x);
    printf("octal : %o\n",x);
    printf("hexadecimal number: %x\n",x);
    printBin(x);
    return 0;
}


