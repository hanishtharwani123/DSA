#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printList(struct node* n){
    while(n!=NULL){
        printf("%d\n", n->data);
        n = n->next;
    }
}

struct node* deleteAtIndex(struct node* head, int index){
    struct node* p = head;
    struct node* q = head->next;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}
int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;

    printf("LINKED LIST BEFORE DELETION\n");
    printList(head);

    head = deleteAtIndex(head, 2);
    printf("LINKED LIST AFTER DELETION\n");
    printList(head);

    return 0;
}
