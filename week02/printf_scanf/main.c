#include <stdio.h>

int main(void)
{
    int x=1;
    int y=2;
    int z;



    printf("Please enter x:");
    scanf("%d", &x);

    printf("Please enter y:");
    scanf("%d", &y);
    z=x+y;

    printf("x: %d\n",x);
    printf("y: %d\n",y);
    printf("z=x+y: %d\n",z);
    return 0;
}
