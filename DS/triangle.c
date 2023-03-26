#include <stdio.h>
#include <stdlib.h>

void lower(int a[10][10],int row,int col)
{
    int i,j,lower_sum=0;
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
		lower_sum+=a[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of lower triangle of matrix is:%d\n",lower_sum);
}

void upper(int a[10][10],int row,int col)
{
    int i,j,upper_sum=0;
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
		upper_sum+=a[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of upper triangle is:%d\n",upper_sum);
}

int main()
{
    int a[10][10],row,col,i,j;
    printf("Enter rows and cols:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix:\n");
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
