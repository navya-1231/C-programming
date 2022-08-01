#include <stdio.h> 
void mergeSort(int [], int, int);
void merge(int [], int, int, int);

void main() {
  int array[10], i, n;
  printf("\nEnter the size of the array : ");
  scanf("%d", & n);
  printf("\nEnter the elements : ");
  for(i=0;i<n;i++){                       
    printf("\nElement[%d] : ",i);
    scanf("%d",&array[i]);
  }
  mergeSort(array,0,n-1);
  printf("\n The sorted array is: \n");
  for (i = 0; i < n; i++){
    printf(" %d\t", array[i]);
  }
}


void mergeSort(int array[], int lb, int ub){
  int mid;
  if (lb<ub) {
    mid = (lb+ub)/2;
    mergeSort(array,lb,mid);
    mergeSort(array,mid+1,ub);
    merge(array,lb,mid,ub);
  }
}

void merge(int array[], int lb, int mid, int ub) {
    int array2[10];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while ((i<=mid) && (j<=ub)){
      if(array[i]<=array[j]){
      array2[k]=array[i];
      i++;
    } 
    else{
      array2[k]=array[j];
      j++;
    }
    k++;
  }
  if(i>mid){
    while(j<=ub){
      array2[k] = array[j];
      j++;
      k++;
    }
  } 
  else {
    while(i<=mid){
      array2[k]=array[i];
      i++;
      k++;
    }
    
  }
  for (k=lb;k<=ub;k++)
    array[k] = array2[k];
}



