#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct subject_el{
    char course_id[10];
    char name[100];
    int credit;
    struct subject_el **prerequisites;
    struct subject_el *next;
};
typedef struct subject_el subject;

void show(subject *p){
    if(p->next==0)
        return;
    printf("%s %d %s\n",p->course_id,p->credit,p->name);
    show( p->next );
}
void write(subject *p,FILE *pfile){
    if(p->next==0)
        return;
    fprintf(pfile,"%s %d %s\n",p->course_id,p->credit,p->name);
    write(p->next,pfile);
}
void read(subject *root,FILE *pfile){
    subject * cur;

    char _course_id[10];
    char _name[100];
    int _credit;

    cur=root;

    while(1){
        fscanf(pfile,"%s%d",_course_id,&_credit);
        fscanf(pfile,"%s",_name);
        if(_course_id[0]=='-') break;
        strcpy(cur->course_id,_course_id);
        cur->credit=_credit;
        strcpy(cur->name,_name);

        cur->next = (subject*) malloc(sizeof(subject));
        cur=cur->next;
    }
}
int main(void)
{
    subject root;
    root.next=0;
//    subject * cur;
//    char _course_id[10];
//    char _name[100];
//    int _credit;
//    //subject **_prerequisites;

//    cur=&root;
//    printf("Please enter\n");
//    while(1){
//        printf("id credit: ");
//        scanf("%s%d",_course_id,&_credit);
//        printf("course name:");
//        scanf("%s",_name);
//        if(_course_id[0]=='-') break;
//        strcpy(cur->course_id,_course_id);
//        cur->credit=_credit;
//        strcpy(cur->name,_name);

//        cur->next = (subject*) malloc(sizeof(subject));
//        cur=cur->next;
//    }

    FILE *pfile;
    pfile=fopen("subjects.txt","r");
    read(&root,pfile);
    fclose(pfile);

    show(&root);
//    pfile=fopen("subjects.txt","w");
//    write(&root,pfile);
//    fclose(pfile);

    return 0;
}

