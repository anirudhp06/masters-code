#include <stdio.h>
#include <stdlib.h>

void lower(int a[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
                printf("0 ");
            else
            {
                printf("%d ",a[i][j]);
                printf(" ");
            }
        }
        printf("\n");
    }
}

void upper(int a[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>j)
                printf("0 ");
            else
            {
                printf("%d ",a[i][j]);
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10],row,col,i,j;
    printf("Enter rows and cols:");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix:");
    for(i=0;i<row;i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("lower\n");
    lower(a,row,col);
    printf("Upper\n");
    upper(a,row,col);
    return 0;
}