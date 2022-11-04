#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr){
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}


int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack*ptr, int val){
    if (isFull(ptr)){
        printf("Stack is overFlow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct node* ptr){
    if (isEmpty(ptr))
}

int main(){

    struct stack * s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 4;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

}