#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void printList(struct node* n){
    while(n!=NULL){
        cout << n->data << endl;
        n = n->next;
    }
}

int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();

    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    printList(head);

    return 0;
}