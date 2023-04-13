// insert the values to a matrix and display them
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column");
    scanf("%d%d", &row, &column);
    int a[row][column], i, j;
    printf("enter the value of array: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
    printf("the value of matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}