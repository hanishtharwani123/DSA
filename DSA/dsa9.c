#include <stdio.h>

struct node{
    int data;
    struct node * next;
};

void printList(struct node* n){
    while(n!=NULL){
        printf("%d\n", n->data);
        n = n->next;
    }
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

    second->data = 4;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;

    printList(head);

    return 0;
}