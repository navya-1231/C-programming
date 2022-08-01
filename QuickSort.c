#include <stdio.h>
int a[100];
int partition(int a[],int l,int h){
    int pivot,i,j,temp;
    pivot=a[l];
    i=l+1;
    j=h;

    while(i<j){
        while(a[i]<=pivot && i<h)
        i++;
        while(a[j]>pivot)
        j--;

        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        temp=a[l];
        a[l]=a[j];
        a[j]=temp;

        return j;
    }
}
void quickSort(int a[],int l, int h){
    int p;
    if(l < h) {
        p=partition(l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}
int main() {
    int a[100],n,i;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++){                         
        printf("\nElement[%d] : ",i);
        scanf("%d",&a[i]);
    }
    quickSort(a,0, n - 1);
    printf("\nSorted arrat is : ");
    for(i = 0; i < n; i++)  {
        printf(" %d \t", a[i]);
    }
    
}