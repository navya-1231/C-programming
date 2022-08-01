#include<stdio.h>
int main(){
    int i,myArray[10],n,min,count=0,j,temp;           
    printf("\nEnter the no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++){                         
        printf("\nElement[%d] : ",i);
        scanf("%d",&myArray[i]);
        count++;
    }
    i=0;
    count++;        
    while(i<n){                              
        min=i;
        count++;
        j=i+1;
        count++;
        while(j<n){
            if(myArray[j]<myArray[min]){
                min=j;  
                count++;
            }
            j++;
            count++;        
        }
        temp=myArray[i];
        count++;
        myArray[i]=myArray[min];
        count++;
        myArray[min]=temp;
        count++;
        i++;
        count++;
    }
    printf("\nSorted Array is: ");                        
    for(i=0;i<n;i++){
        printf("%d  ",myArray[i]);
        count++;
    }
    count++;
    printf("\n\nTime Complexity : %d",count);
    return 0;
}