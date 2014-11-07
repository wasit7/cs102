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
    printf("%s %d %s\n",p->course_id,p->credit,p->name);
    if(p->next==0)
        return;    
    show( p->next );
}

void write(subject *p,FILE *pfile){
    fprintf(pfile,"%s %d %s\n",p->course_id,p->credit,p->name);
    if(p->next==0)
        return;    
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
        strcpy(cur->course_id,_course_id);
        cur->credit=_credit;
        strcpy(cur->name,_name);
        if(_course_id[0]=='-') {
            cur->next = 0;
            break;
        }
        cur->next = (subject*) malloc(sizeof(subject));
        cur=cur->next;
    }
}



int main(void)
{
    subject root;
    root.next=0;
    FILE *pfile;

//Manaully enter the data

    subject * cur;
    char _course_id[10];
    char _name[100];
    int _credit;
    cur=&root;
    printf("Please enter\n");
    while(1){
        printf("id credit: ");
        scanf("%s%d",_course_id,&_credit);
        printf("course name:");
        scanf("%s",_name);
        strcpy(cur->course_id,_course_id);
        cur->credit=_credit;
        strcpy(cur->name,_name);
        if(_course_id[0]=='-') {
            cur->next = 0;
            break;
        }
        cur->next = (subject*) malloc(sizeof(subject));
        cur=cur->next;
    }

//show the data

    show(&root);

//save file

    pfile=fopen("../subjects.txt","w");
    write(&root,pfile);
    fclose(pfile);

//read file
    printf("loading file...\n");
    pfile=fopen("../subjects.txt","r");
    read(&root,pfile);
    fclose(pfile);
//show the data
    show(&root);


    return 0;
}

