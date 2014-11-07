#include <stdio.h>

int main(void)
{
    FILE *pfile1, *pfile2;

    pfile1=fopen("file.txt","w");
    printf("pfile1: %p\n",pfile1);
    fprintf(pfile1,"using pfile1:%p\n",pfile1);
    fclose(pfile1);

    pfile2=fopen("file.txt","a");
    printf("pfile2: %p\n",pfile2);
    fprintf(pfile2,"using pfile2:%p\n",pfile2);
    fclose(pfile2);
    return 0;
}

