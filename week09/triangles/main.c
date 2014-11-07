#include <stdio.h>

//prototype
float area3( float a, float b, float c);
float area2( float w, float h);

int main(void)
{
    float A1,A2,A3;
    A1=area2(3,4);
    A2=area2(6,8);
    A3=area3(3,4,5);
    printf("total area: %.3f\n",A1+A2+A3);
    return 0;
}

//implementation
float area3( float a, float b, float c){
    float s, area;
    s = 0.5f * (a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
float area2( float w, float h){
    float area;
    area = 0.5 * w * h;
    return area;
}
