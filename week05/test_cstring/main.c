#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20];
    char s2[20]={"Hello"};
    char s3[20]={"World"};

    printf("s1 before copying: %s\n",s1);
    strcpy(s1,s2);
    printf("s1 after copying: %s\n",s1);

    strcat(s1,s3);
    printf("s1 after strcat: %s\n",s1);

    printf("strcmp(s1,s2): %d\n",strcmp(s1,s2));

    printf("strlen(s1): %d\n",strlen(s1));
    return 0;
}

