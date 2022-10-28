#include <stdio.h>
#define maxsize 10

int stack[maxsize],top=-1,n;
void pop();
void push();
void display();

void main(){
    int ch;
    do{
        printf("\n1 Push\n");
        printf("2 Pop\n");
        printf("3 Display\n");
        printf("4 Exit\n");
        
        printf("Enter a value :- ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push(); 
            break;
        case 2:
            pop(); 
            break;
        case 3:
            display(); 
            break;
        case 4: 
            break;
        default:
            printf("Invalid Argment....");
            break;
        }
    } while(ch!=4);
        
} 

void push(){
    if(top==maxsize-1){
        printf("Stack overrflow");
    }
 
    else{
        printf("Enter a value :- ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}
void pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
       printf("Deleted value :- %d",stack[top]);
       top--;
    }
}   
void display(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
    for (int i = 0; i<=top; i++)
    {
        printf("%d\t",stack[i]);
    }
    }

    
}
