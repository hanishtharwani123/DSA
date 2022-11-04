#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printList(struct node* n){
    while( n!=NULL){
        printf("%d", n->data);
        n = n->next;
    }
}

struct node* insertAtFirst(struct node* head, int data){
    struct node* n= (struct node*) malloc(sizeof(struct node));
    n->next = head;
    n->data = data;
    return n;
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

    fourth->data = 6;
    fourth->next = NULL;

    printList(head);
    head = insertAtFirst(head, 45);
    printList(head);

    return 0;
}