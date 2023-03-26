#include <stdio.h>

int main() {
    int row, col, i, j, count = 0;
    int mat[100][100], sparse[10000][3],inv[10][10];

    // Input the matrix size
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
            // Count non-zero elements
            if (mat[i][j] != 0) {
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = mat[i][j];
                count++;
            }
        }
    }

    // Display the sparse matrix
    printf("\nThe sparse matrix representation is:\n");
    for (i = 0; i < count; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sparse[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(j=0;j<3;j++)//transposing matrix
    {
        for(i=0;i<count;i++)
        {
            inv[j][i]=sparse[i][j];
        }
    }
    for(i=0;i<3;i++){//displaying transpose of matrix
        for(j=0;j<count;j++)
        {
            printf("%d ",inv[i][j]);
        }
        printf("\n");
    }
    return 0;
}
