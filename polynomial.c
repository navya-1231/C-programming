struct poly{
    int expo;
    int coeff;
    };
#include<stdio.h>
int main(){
    int i,n;
    struct poly p[10];
    printf("\nEnter the number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the coeffecient of %d term : ",i+1);
        scanf("%d",&p[i].coeff);
        printf("\nEnter the exponent of %d term    : ",i+1);
        scanf("%d",&p[i].expo);
    }
    printf("\nThe polynomial is ");
    for(i=0;i<n;i++){
            printf("%d(x^%d)",p[i].coeff,p[i].expo);
            if(i!=n-1){
            printf("+");
        }
    }
return 0;
}