#include <stdio.h>
#include <stdlib.h>

typedef struct stackADT{
    int data;
    struct stackADT *link;
}stack;

stack *top;

void show(){
    stack *ptr = top;
    printf("The elements in stack are: \n");
    if(ptr == NULL){
        printf("The stack is empty!\n");
        return;
    }
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void push(int item){
    stack *new = (stack*)malloc(sizeof(stack));
    if(new == NULL){
        printf("Error!! Overflow!!");
        return;
    }
    else{
        new->data = item;
        new->link = top;
        top = new;
    }
}

void pop(){
    stack *ptr;
    if(top == NULL){
        printf("Error!! Underflow!!");
    }
    else{
        ptr = top;
        top = ptr->link;
        free(ptr);
    }
}

int main() {
    push(56);
    push(96);
    show();
    pop();
    pop();   
    pop();
    return 0;
}