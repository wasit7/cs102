#include <stdio.h>

int main(void)
{
    char str[10]="Hello";
    char *pt;
    int i;

    pt=str;

    for(i=0;i<6;i++){
        printf("str[i]:%c \t *(pt++)%c\n", str[i], *(pt++));
    }
    return 0;
}

