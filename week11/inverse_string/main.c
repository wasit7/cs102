#include <stdio.h>
void reverse(char *str){
    if(!str[0])
        return;
    reverse( str+1 );
    printf("%c",str[0] );
}

int main(void)
{
    char str[]="Hello World!";
    reverse(str);
    printf("\n");
    return 0;
}

