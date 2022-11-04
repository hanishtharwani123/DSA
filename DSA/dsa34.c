// STACK

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct node* ptr){
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node* ptr){
    if (ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){

    struct node* s;
    s = (struct node*) malloc(sizeof(struct node));
    s->size = 4;
    s->top = -1;
    s->arr = (int*) malloc(s->size * sizeof(int));


}