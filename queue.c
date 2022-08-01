#include<stdio.h>
int queue_array[10],size,operation;
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();


int main(){
    printf("\nEnter the size of the queue: ");
    scanf("%d",&size);
    do{
        printf("\n\nEnter\n1.Enqueue\t2.Dequeue\t3.Exit\n\nSelect the suitable operation: "); 
        scanf("%d",&operation);

        switch (operation){
            case 1: 
            { 
                enqueue(); 
                display();
                break; 
            }
            case 2:
            {
                dequeue();
                display();
                break; 
            }
            case 3: 
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
    while(operation!=3);
    return 0;
}
void enqueue()
{
    int item;
    
    if(rear==size-1)
    {
        printf("\nOVERFLOW !!\n"); 
    }
    else{
        printf("\nEnter the element: ");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue_array[rear]=item;   
    }
}
void dequeue()
{
    int item;
    
    if(front==-1 || front>rear)
    {
       printf("\nUNDERFLOW !!"); 
    }
    else{
        item=queue_array[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
        printf("\nDeleted element is: %d\n",item); 
    }

}
void display()  
    {  
        int i;  
        if(rear == -1)  
        {  
            printf("\nEmpty queue\n");  
        }  
        else  
        {   printf("\nQueue: ");  
            for(i=front;i<=rear;i++)   
                printf("%d  ",queue_array[i]);    
        }  
    }  
