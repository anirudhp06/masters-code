//C Program to find sum of diagonal elements in square matrix.
#include <stdio.h>
int main()
{
    int a[10][10],m,n,i,j,sum=0;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    if(m!=n)
        printf("Matrix isnt square hence sum cannot be obtained.");
    else
    {
        printf("Enter the matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for ( i = 0; i < m; i++)
        {
            sum+=a[i][i];
        }
        printf("Sum=%d",sum);
    }
    return 0;
    
}