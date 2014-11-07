#include <stdio.h>
#include <string.h>
//scan input from user
//input -id[string] -name[string] -cradits[int] -description[sring]
struct subject{
    char id[10];
    char name[30];
    int cradit;
    char desp[100];
};
int main(void)
{
    int i;
    struct subject slist[50];
    for(i=0;i<2;i++){
        printf("Enter subject detail:\nid:");
        scanf("%s",slist[i].id);
        if(0==strcmp(slist[i].id," ")){
            break;
        }
        printf("name:");
        scanf("%s",slist[i].name);
        printf("cradit:");
        scanf("%d",&slist[i].cradit);
        printf("descrition:");
        scanf("%s",slist[i].desp);

    }

    for(i=0;i<2;i++){
        printf("Enter subject detail:");
        printf("id: %s\n",slist[i].id);
        if(0==strcmp(slist[i].id," ")){
            break;
        }
        printf("name: %s\n",slist[i].name);
        printf("cradit: %d\n",slist[i].cradit);
        printf("descrition: %s\n",slist[i].desp);

    }

    return 0;
}

