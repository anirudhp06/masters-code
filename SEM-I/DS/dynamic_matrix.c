#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,i,row=5,col=3;
    int *a[row];//initializing the array with number of rows.
    
    for(i=0;i<row;i++)//going into for loop to allocate memory for each column of row
    {
        a[i]=(int*) malloc(col*sizeof(int));//each column is now allocated memory dynamically.
    }
    for(i=0;i<row;i++)//displaying output of matrix
    {
        for(j=0;j<col;j++)
            printf("%d ",a[i][j]);//usually garbage value if not initialized.
        printf("\n");
    }
    return 0;
}