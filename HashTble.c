#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[TABLE_SIZE]= {};
void insert()
{
    int key,index,i,flag=0,hkey;
    printf("\nEnter a value to insert into hash table\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0; i<TABLE_SIZE; i++)
    {
        index=(hkey+i)%TABLE_SIZE;
        if(h[index] == '\0')
        {
            h[index]=key;
            break;
        }
    }
    if(i == TABLE_SIZE) 
    printf("\nElement can not be inserted\n");
}

void display()
{
     int i;
     printf("\nElements in the hash table are \n");
     for(i=0; i< TABLE_SIZE; i++)
         printf("\n at index %d \t value = %d",i,h[i]);
         printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
        printf("\nPress  1.Insert\t 2.Display \t 3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}
