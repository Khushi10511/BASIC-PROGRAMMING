// addition of two matrices
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column");
    scanf("%d%d", &row, &column);
    int a[row][column], b[row][column], sum[row][column], i, j;
    printf("enter the value of array a : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter the value of array b: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &b[i][j]);
    }
    printf("the value of matrix a is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("the value of matrix b is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            sum[i][j] = a[i][j] + b[i][j];
    }
    printf("the sum is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}