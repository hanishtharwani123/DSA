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
    if (ptr->top = ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * ptr, int val){
    if isFull(ptr)){
        printf("")
    }
}

int main(){
    struct stack* s;
    s = (struct node*) malloc(sizeof(struct node));
    s->size = 4;
    s->top = -1;
    s->arr = (int*) malloc(s->size * sizeof(int));


}