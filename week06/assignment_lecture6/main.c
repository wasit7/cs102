#include <stdio.h>
#define n 100
int main(void)
{
    int x[n];
    int y[n];
    int i;

    FILE* pfile;
    pfile=fopen("points.dat","w");
    for(i=0;i<n;i++){
        x[i]=rand()%19;
        y[i]=rand()%19;
        printf("i:%3d, %3d, %3d\n",i,x[i],y[i]);
        fprintf(pfile,"%2d %2d\n",x[i],y[i]);

    }
    fclose(pfile);
    return 0;
}

