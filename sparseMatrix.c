#include<stdio.h>
void read_matrix(int array[10][10],int row,int col);
void create_sparse(int array[10][10],int row,int col,int b[4][3]);
void print_sparse(int b[4][3]);

int main(){
    int array[10][10],b[4][3],row,col;
    printf("\nEnter the no.of rows: ");
    scanf("%d",&row);
    printf("\nEnter the no.of columns: ");
    scanf("%d",&col);
    
    read_matrix(array,row,col);
    create_sparse(array,row,col,b);
    print_sparse(b);

     return 0;
}
void read_matrix(int array[10][10],int row,int col)
{
    int i,j;
    printf("\nEnter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
}
void create_sparse(int array[10][10],int row,int col,int b[4][3])
{
    int i,j,k;
    k=1;
    b[0][0]=row;
    b[0][1]=col;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(array[i][j]!=0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=array[i][j];
                k++;
            }
        }
        b[0][2]=k-1;
    }
}
void print_sparse(int b[4][3])
{
    int i,col;
    col=b[0][2];
    printf("\nSparse Matrix\n");

    for(i=0;i<=col;i++)
    {
        printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
    }

}