#include <stdio.h>

int main(void)
{
    float pos[3]={0.0f, 0.0f, 0.0f};
    float vel[3]={0.0f, 0.0f, 0.0f};
    float acc[3]={1.0f,-9.8f, 2.0f};
    int i,j;
    float dt=0.1f;
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            vel[j]+= acc[j]*dt;
            pos[j]+= vel[j]*dt;
        }
        printf("%6.3f, %6.3f, %6.3f\n",pos[0],pos[1],pos[2]);
    }

    return 0;
}

