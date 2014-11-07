#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[]="Hello";
    char str2[10];
    char *str3;
    char *str4;

    strcpy(str2,"World");
    str3=str1;
    str4=&str1[0];
    printf("str1: %s, pointer:%p\n",str1,str1);
    printf("str2: %s, pointer:%p\n",str2,str2);
    printf("str3: %s, pointer:%p\n",str3,str3);
    printf("str4: %s, pointer:%p\n",str4,str4);
    printf("str2:%p\n",str2);//line1
    printf("&str2[1]:%p\n",&str2[1]);//line2
    printf("(&str2[1]+2):%p\n",(&str2[1]+2));//line3
    printf("(&str2[1]+2)[1]:%c\n",(&str2[1]+2)[1]);//line4
    return 0;
}

