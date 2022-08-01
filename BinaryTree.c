#include<stdio.h>
#include<math.h>

int main()
{
    int i,size,n,nodes;
    char myarray[50];
    printf("\nEnter the total height of the binary tree: ");
    scanf("%d",&n);
    size=n+1;
    printf("\nEnter the Root Element:");
    scanf(" %c",&myarray[0]);
   
    nodes=(2^n)-1;
    printf("\nEnter ""_"" to represent Free space\n");
    for(i=0;i<nodes;i++){
        if(myarray[i]!='_'){
            printf("\nEnter the Left child of  %c : ",myarray[i]);
            scanf(" %c",&myarray[(2*i)+1]);
            printf("Enter the Right child of  %c : ",myarray[i]);
            scanf(" %c",&myarray[(2*i)+2]);
        }
        else{
            myarray[(2*i)+1]='_';
            myarray[(2*i)+2]='_';

        }
    }
    printf("\nThe binary tree using array representation\n\n");

    nodes=(size*size)-1;
    for(i=0;i<nodes;i++){
        printf("%c\t",myarray[i]);
    }
    printf("\n");
    return 0;
}