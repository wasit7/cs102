#include <stdio.h>
#include <stdlib.h>
struct node{
    int num;
    struct node *next;
};

int main(void)
{
    struct node root;
    //x:root
    root.num=3;
    root.next=(struct node *) malloc(sizeof(struct node));
    //y: root->next
    root.next->num=2;
    root.next->next=(struct node *) malloc(sizeof(struct node));
    //z: root->next->next
    root.next->next->num=1;
    root.next->next->next=0;

    struct node *L;
    struct node *R;
    struct node *temp;
    struct node *cur;
    struct node *output;
    //show
    cur=&root;
    printf("before sorting\n");
    while(cur!=0){
        printf("%d node:%p next:%p\n", cur->num,cur,cur->next);
        cur=cur->next;
    }
    output=&root;
    L=output;
    //sorting
    while(L->next!=0){
        R=L->next;
        while(R!=0){
            //swap
            if(L->num > R->num){
                temp=R->next;
                R->next=L;
                L->next=temp;
            }
            R=R->next;
        }
        L=L->next;
    }

    //show
    cur=output;
    printf("after sorting\n");
    while(cur!=0){
        printf("%d node:%p next:%p\n", cur->num,cur,cur->next);
        cur=cur->next;
    }


    return 0;
}

