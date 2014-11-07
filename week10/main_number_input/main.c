#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    float num;
    for(i=1; i<argc; i++){
        num=atof(argv[i]);
        printf("Half of %.1f is %.1f\n",num,0.5f*num);
    }
    return 0;
}
