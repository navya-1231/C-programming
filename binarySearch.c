/***********************************************************
 * File             : binary_search.c
 * Description      : C Program to 
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 22/11/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int n,i,element,L=0,POS=-1,MID,count=0;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    int array[10];
    int H=n-1;
    printf("\nEnter elements:\n");
     for(i=0;i<n;i++){
         printf("\nElement [%d]: ",i);
         scanf("%d",&array[i]);
         count++;
     }
     printf("\nEnter the element to be searched: ");
     scanf("%d",&element);

     while(L<=H){
         MID=(L+H)/2;
         if(array[MID]==element){
             POS=MID;
             printf("\nElement found at position %d",POS);
             count++;
             break;
         }
         else if(array[MID]>element){
             H=MID-1;
             count++;
         }
         else{
             L=MID+1;
             count++;
         }
         count++;
     }
     if(POS==-1){
         printf("\nElement not found");
     }
     count++;
     printf("\n\nTime Complexity : %d",count);
    return 0;
}