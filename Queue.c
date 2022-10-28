#include <stdio.h>
#define maxsize 10

int n,q[maxsize],front=0,rear=-1;
void insert();
void Delete();
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
            insert(); 
            break;
        case 2:
            Delete(); 
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
void insert(){
    
    if(rear==maxsize-1){
        printf("Queue overrflow");
    }
 
    else{
        printf("Enter a value :- ");
        scanf("%d",&n);
        rear++;
        q[rear]=n;
    }
}
void Delete(){
    if(front>rear){
        printf("Queue underflow");
    }
    else{
       printf("Deleted value :- %d",q[front]);
       front++;
    }
}  
void display(){
    if(front>rear){
        printf("Stack underflow");
    }
    else{
    for (int i = front; i<=rear; i++)
    {
        printf("%d\t",q[i]);
    }
    }

    
}