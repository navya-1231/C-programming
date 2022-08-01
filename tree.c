#include<stdio.h>
#include<math.h>
int main(){
    int n,size,i,nodes;
    char a[100];
    printf("Enter the height of the tree");
    scanf("%d",&n);
    size=n+1;
    printf("Enter the root of the element");
    scanf("%c",&a[0]);

    nodes=(n*n)-2;
    printf("enter _ to represent empty space");
    for(i=0;i<nodes;i++){
        if(a[i]!='_'){
            printf("enter the left of %c",a[i]);
            scanf("%c",&a[(i*2)+1]);
            printf("enter the right of %c",a[i]);
            scanf("%c",&a[(i*2)+2]);
            
        }
        else{
            a[(i*2)+1]='_';
            a[(i*2)+2]='_';
        }
    }
    printf("\nThe binary tree using array representation\n\n");

    nodes=(size*size)-1;
    for(i=0;i<nodes;i++){
        printf("%c\t",a[i]);
    }
    printf("\n");
    return 0;

}