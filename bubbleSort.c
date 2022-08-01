/***********************************************************
 * File             : bubbleSort.c
 * Description      : C Program to read bubble sort
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 22/11/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int i,myArray[10],n,count=0,j,temp;            
    printf("\nEnter the no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++){                       
        printf("\nElement[%d] : ",i);
        scanf("%d",&myArray[i]);
        count++;
    }
    for(i=0;i<n;i++){                         
        for(j=0;j<n-i-1;j++){
            if(myArray[j]>myArray[j+1]){
                temp=myArray[j];
                count++;
                myArray[j]=myArray[j+1];
                count++;
                myArray[j+1]=temp;
                count++;
            }
            count++;
        }
        count++;
    }
    printf("\nSorted Array is: ");                         
    for(i=0;i<n;i++){
        printf("%d  ",myArray[i]);
        count++;
    }
    count++;
    printf("\n\nTime Complexity :  %d",count);      
    return 0;
}
