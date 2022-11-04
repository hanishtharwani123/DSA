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

struct node* insertAtIndex(struct node* head, int data, int index){
    struct node* n = (struct node*) malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    n->data = data;
    n->next = p->next;
    p->next = n;
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

    third->data = 5;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = NULL;

    printf("LINKED LIST BEFORE INSERTION\n");
    printList(head);
    head = insertAtIndex(head, 25, 2);
    printf("LINKED LIST AFTER INSERTION\n");
    printList(head);

    return 0;

}