#include <stdio.h>

int main(void)
{
    float dt = 5e-2;
    float time = 0.0f;
    float velocity = 5.0f;
    float distance = 0.0f;
    float g = -9.8f;
    printf("time(s)\t velocity(m/s)\t distance(m)\n");
    while(velocity > 0.0f){
        time=time+dt;
        //v=at+u
        velocity = g*dt + velocity;
        distance = velocity*dt + distance;
        printf("%6.3f\t %12.3f\t %10.3f\n", time, velocity, distance);
    }
    return 0;
}

