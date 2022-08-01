/***********************************************************
 * File             : linear_search.c
 * Description      : C Program to 
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 22/11/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int array[10],n,i,s,flag=0,count=0;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    
    printf("\nEnter elements\n");
    for(i=0;i<n;i++){
        printf("\nElements[%d]:",i);
        scanf("%d",&array[i]);
        count++;
    }   
    printf("\nEnter the element to be searched: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(array[i]==s){
            flag=1;
            count++;
            break;}
    }
    if (flag==1)
    printf("\nElement is found at %d\n",i);
    else
    printf("\nElement not found\n");
    count++;
    printf("\nTime complexity :%d",count);
    return 0;
}