#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};


void printList(struct node * n){
    while (n!=NULL){
        printf("%d", n->data);
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

    head->data = 4;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = NULL;

    printList(head);

    return 0;
}