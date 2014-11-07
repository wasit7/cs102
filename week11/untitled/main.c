#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct person_el{
    int id;
    char name[10];
    struct person_el *next;
};
typedef struct person_el person;
void show(person *p){
    if(p->next==0)
        return;
    printf("id:%03d name: %s\n",p->id,p->name);
    show( p->next );
}

int main(void)
{    
    person root;
    person * cur;
    int in_id;
    char in_name[10];
    root.next=0;
    cur=&root;
    printf("Please enter\n");
    while(1){
        printf("id and name: ");
        scanf("%d%s",&in_id,in_name);
        if(!in_id) break;
        cur->id=in_id;
        strcpy(cur->name,in_name);
        cur->next = (person*) malloc(sizeof(person));
        cur=cur->next;
    }
    show(&root);
    return 0;
}

