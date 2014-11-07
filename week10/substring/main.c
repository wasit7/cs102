#include <stdio.h>
char* substr(char* str, char* substr);

int main(void)
{
    char str[]="TODAY IS A GOOD DAY AND TOMORROW IS EVEN BETTER";
    printf("%s\n",str);
    printf("%s\n",substr(str,"TOMORROW"));
    return 0;
}

char *substr(char *str, char *sub){
    int i;
    char *p1, *p2, *start;
    for(i=0;str[i];i++){
        p1=&str[i];
        start=p1;
        p2=sub;
        while(*p2 && *p1==*p2){
            p1++;
            p2++;
        }
        //if match found
        if(!*p2){
            return start;
        }
    }
    return 0;
}
