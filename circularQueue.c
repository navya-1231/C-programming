#include<stdio.h>
int queue_array[50],size,operation;
int front = -1, rear = -1; 

  void insert();  
  int delete();  
  void display();  
   
  
    
int main(){
  printf("\nEnter the size of the queue: ");
  scanf("%d",&size);
    do{
        printf("\n\nEnter\n1.insert\t2.delete\t3.exit\n\nSelect the suitable operation: ");
        scanf("%d", &operation);

        if(operation == 1){
            insert();
            display();
        }
        else if(operation == 2){
            delete();
            display();
        }
        else if(operation == 3){
          printf("\nExit"); 
        }
        else{
          printf("\nInvalid!!!");
        }
    }
    while(operation != 3);
}
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == size - 1)) 
  return 1;
  return 0;
}
int isEmpty() {
  if (front == -1)
  return 1;
  return 0;
}
void insert() {
  int element;  
  if (isFull())
  printf("\n OVERFLOW!! \n");
  else {
    printf("\nEnter the element: ");
    scanf("%d",&element);

    if (front == -1) front = 0;
    rear = (rear + 1) % size;
    queue_array[rear] = element;
  }
}


int delete() {

  int element;
  if (isEmpty()) {
    printf("\nUNDERFLOW!! \n");
    return (-1);
  } 
  else 
  {
    element = queue_array[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    }
    else 
    {
      front = (front + 1) % size;
    }
    printf("\nDeleted element : %d \n", element);
    return (element);
  }
}

void display() {
  int i;
  if (front ==-1){
      
      printf(" ");
  }
  else {
    printf("\nQueue : ");
    for (i = front; i != rear; i = (i + 1) % size) {
      printf("%d ", queue_array[i]);
    }
    printf("%d ", queue_array[i]);
  }
}

