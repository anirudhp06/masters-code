//Matrix Multiplication using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,m1,m2,n1,n2;
    static int c[10][10];

    printf("Enter Rows of first matrix:");
    scanf("%d",&m1);
    printf("Enter cols of first matrix:");
    scanf("%d",&n1);
    //Creating a matrix with m1 rows.
    int *a[m1];
    //Allocating Memory dynamically for matrix a
    for(i=0;i<m1;i++)
        a[i]=(int*)malloc(n1*sizeof(int));

    printf("Enter rows for 2nd matrix:");
    scanf("%d",&m2);
    printf("Enter cols for 2nd matrix:");
    scanf("%d",&n2);
    //Creating a matrix with m2 rows.
    int *b[m2];
    //Allocating memory dynamically for matrix b
    for(i=0;i<m2;i++)
        b[i]=(int*)malloc(n2*sizeof(int));

    if(n1!=m2)
    {
        printf("Matrices are not equal hence cannot be multiplied.\n");
        exit(0);
    }
    printf("Enter matrix 1:\n");
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    printf("Enter matrix 2:\n");
    for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            for(k=0;k<m2;k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}