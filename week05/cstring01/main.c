#include <stdio.h>


int main(void)
{
    char str[10]={"123456789"};
    printf("string is \"%s\"\n",str);
    int i;
    for(i=0;i<10;i++){
        printf("str[%d]: 0x%x\n",i,str[i]);
    }
    return 0;
}

