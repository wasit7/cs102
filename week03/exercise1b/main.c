#include <stdio.h>
#include <math.h>

int main(void)
{
    float theta = 1.234f;
    float x = sin(theta)*sin(theta)+cos(theta)*cos(theta);
    printf("x = %5.3f\n", x);
    return 0;
}

