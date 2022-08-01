#include<stdio.h>
int size ,stack[10],top,max,operation;
void pop();
void push();
void display();
int main(){
    top=-1;
    printf("\nEnter maximum size of stack: ");
    scanf("%d",&max);
do{
    printf("\n\nEnter\n1-Push\t2-Pop\t3-Display\t4-Exit\n\nSelect the suitable operation: "); 
    scanf("%d",&operation);

        switch (operation){
            case 1: 
            { 
                push(); 
                break; 
            }
            case 2:
            {
                pop();
                break; 
            }
            case 3: 
            {
                display();
                break; 
            } 
            case 4: 
            {
                printf("\nExit"); 
                break;
            }
            default:
            { 
                printf("\nInvalid!!!");
            }
              
        }
    } 
        while(operation!=4);
        return 0;
}

void push(){
    int item;
    if(top==max-1){ 
        printf("\nStack is full\n");
        }
        else{
            printf("\nEnter the element: ");
            scanf("%d",&item);
            top=top+1;
            stack[top]=item;
        }
}
void pop(){
    int item;
    if(top==-1){ 
        printf("\nStack is empty\n");
        }
        else{ 
            item=stack[top];
            top=top-1;
            printf("\nDeleted element: %d",item); 
        }
}
void display(){
    int i;
    printf("\nStack: ");
    for(i=0;i<=top;i++){
        printf("%d  ",stack[i]);
    }
}