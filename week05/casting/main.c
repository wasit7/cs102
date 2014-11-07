#include <stdio.h>
#include <string.h>

int main(void)
{
    int x=10;
    float y;
    y=(float)x;
    printf("y: %f\n",y);
    printf("y/3: %f\n", y/3.0f);
    printf("(int)(y/3.0f): %d\n", (int)(y/3.0f) );
    printf("%d\n",atoi("123"));
    return 0;
}

