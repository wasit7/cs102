#include <stdio.h>

float area3(float a, float b, float c);

int main(void)
{
    float a,b,c,total_area=0.0f;
    while(1){
        printf("please enter thres edges of triagles\n");
        scanf("%f%f%f",&a,&b,&c);
        if(a==0)break;
        total_area+=area3(a,b,c);
    }
    printf("total area is %.3f\n",total_area);
    return 0;
}

float area3( float a, float b, float c){
    float s, area;
    s = 0.5f * (a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
