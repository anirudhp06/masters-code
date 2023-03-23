#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,i,row=5,col=3;
    int *a[row];
    
    for(i=0;i<row;i++)
    {
        a[i]=(int*) malloc(col*sizeof(int));
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}