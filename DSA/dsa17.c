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

struct node* deleteAtFirst(struct node* head){
    struct node * n = head;
    head = head->next;
    free(n);
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

    head = deleteAtFirst(head);
    printf("LINKED LIST AFTER DELETION\n");
    printList(head);

    return 0;
}
