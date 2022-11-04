#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printList(struct node* n){
    while(n!=NULL){
        printf("%d", n->data);
        n = n->next;
    }
}

// INSERTION AT END

struct node* insertAtEnd(struct node* head, int data){
    struct node* n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    struct node* p = head;
    while(p->next = NULL){
        p = p->next;
    }
    p->next = n;
    n->next = NULL;
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

    fourth->data = 6;
    fourth->next = NULL;

    printList(head);
    return 0;
}