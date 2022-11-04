#include <stdio.h>
#include <stdlib.h>

struct node{
    int size;
    int r;
    int f;
    int *arr;
};

int isEmpty(struct node* ptr){
    if (ptr->r = ptr->f){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node* ptr){
    if (ptr->r == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct node* ptr, int val){
    if (isEmpty(ptr)){
        
    }
}

int main(){

    struct node* s;
    q= (struct node* ) malloc(sizeof(struct node));
    s->size = 4;
    s->r = s->f = -1;
    s->arr = (int *) malloc(s->size * sizeof(struct node));
}