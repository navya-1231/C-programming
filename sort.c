#include<stdio.h>
int main(){
    int i,a[10],n,min,count=0,j,temp;           
    printf("\nEnter the no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++){                         
        printf("\nElement[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        //j=i+1;
        for(j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("\nSorted Array is: ");                        
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}