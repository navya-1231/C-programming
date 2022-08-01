#include<stdio.h>
int main(){
    int array[10],n,i=1,j=0,temp=0;           
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++){                         
        printf("\nElement[%d] : ",i);
        scanf("%d",&array[i]);
    }
    for(i=1;i<n;i++){
        temp=array[i];
        j=i-1;
        while(j>=0 && temp<array[j])
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    i++;
    printf("\nSorted Array is: ");                        
    for(i=0;i<n;i++){
        printf("%d  ",array[i]);
    }
}