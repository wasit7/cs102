

#include <stdio.h>
#include <stdlib.h>
struct node_el{
    int id;
    struct node_el * next;
};
typedef struct node_el node;
void swap(node *P, node *L, node *R){
    node* t;
    t=L->next;
    L->next=R->next;
    R->next=P->next;
    P->next=t;
}

int main(void)
{
    node root;
    //node* P,L,R;
    root.id=0;

    root.next=(node*) malloc(sizeof(node));
    root.next->id=1;
    root.next->next=(node *) malloc(sizeof(node));

    root.next->next->id=2;
    root.next->next->next=(node *) malloc(sizeof(node));

    root.next->next->next->id=3;
    root.next->next->next->next=(node *) malloc(sizeof(node));

    printf("%d-->",root.id);
    printf("%d-->",root.next->id);
    printf("%d-->",root.next->next->id);
    printf("%d-->",root.next->next->next->id);
    printf("\n");

    //0  root.id
    //1  root.next.id
    //2  root.next.next.id
    //3  root.next.next.next.id
    swap(&root, root.next, root.next->next);
    printf("After swapping\n");
    printf("%d-->",root.id);
    printf("%d-->",root.next->id);
    printf("%d-->",root.next->next->id);
    printf("%d-->",root.next->next->next->id);
    printf("\n");

    return 0;
}
