#include <stdio.h>
#define Maxstk 8
int Stack[Maxstk + 1], top = 0;


void show(){
    printf("The elements in stack are: \n");
    if(top == 0){
        printf("The stack is empty!\n");
    }
    else{
        for (int i = 1; i <= top; i++) {
            printf("%d\n", Stack[i]);
        }
    }
    
}

void push(int item){
    if (top == Maxstk) {
        printf("Error!! The stack is Overflow!\n");
        return;
    }
    else{
        top++;
        Stack[top] = item;
    }
}

void pop(){
    if(top == 0){
        printf("Error!! stack is underflow!\n");
        return;
    }
    else{
        int item = Stack[top];
        top = top - 1;
    }
}

void isEmpty(){
    if(top == 0){
        printf("The stack is empty!\n");
    }
    else{
        printf("The stack is not empty!\n");
    }
}

void isFull(){
    if(top == Maxstk){
        printf("The stack is full!\n");
    }
    else{
        printf("The stack is not full!\n");
    }
}

int main() {
    // show();
    // push(56);
    // push(258);
    // pop();
    // pop();
    // show();
    // // isEmpty();
    push(25);
    // isEmpty();
    show();
    // isFull();
    push(456);
    show();
    return 0;
}