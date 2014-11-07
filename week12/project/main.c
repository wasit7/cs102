#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct subject_el{
    char course_id[10];
    char name[100];
    int credit;
    struct subject_el **prerequisites;
    char type[2];
    struct subject_el *next;
};
typedef struct subject_el subject;
void show(subject *p);
void write(subject *p,FILE *pfile);
void read(subject *cur,FILE *pfile);
int main(void)
{
    subject root;
    subject * cur;



    char _course_id[10];
    char _name[100];
    int _credit;
    //subject **_prerequisites;
    char _type[2];

    root.next=0;
    cur=&root;
    printf("Please enter\n");
    while(1){
        printf("id credit type{G,F,RI,RO,O}: ");
        scanf("%s%d%s",_course_id,&_credit,_type);
        printf("course name:");
        scanf("%s",_name);
        if(_course_id[0]=='-') break;
        strcpy(cur->course_id,_course_id);
        cur->credit=_credit;
        strcpy(cur->name,_name);
        strcpy(cur->type,_type);

        cur->next = (subject*) malloc(sizeof(subject));
        cur=cur->next;
    }

    FILE *pfile;
//    //to read data from file
//    pfile=fopen("subjects.txt","r");
//    root.next=0;
//    read(&root,pfile);
//    fclose(pfile);

    //to write data to file
    pfile=fopen("subjects.txt","w");
    write(&root,pfile);
    fclose(pfile);

    show(&root);
    return 0;
}

void show(subject *p){
    if(p->next==0)
        return;
    printf("%s %d %s\n%s\n",p->course_id,p->credit,p->type,p->name);
    show( p->next );
}
void write(subject *p,FILE *pfile){
    if(p->next==0)
        return;
    //printf("%s %d %s\n%s\n",p->course_id,p->credit,p->type,p->name);
    fprintf(pfile,"%s %d %s\n%s\n",p->course_id,p->credit,p->type,p->name);
    write(p->next,pfile);
}
void read(subject *cur,FILE *pfile){
    if(cur->next==0)
        return;
    char _course_id[10];
    char _name[100];
    int _credit;
    char _type[2];

    scanf(pfile,"%s%d%s",_course_id,&_credit,_type);
    scanf(pfile,"%s",_name);
    strcpy(cur->course_id,_course_id);
    cur->credit=_credit;
    strcpy(cur->name,_name);
    strcpy(cur->type,_type);

    cur->next = (subject*) malloc(sizeof(subject));
    cur=cur->next;
    read(cur->next,pfile);
}
