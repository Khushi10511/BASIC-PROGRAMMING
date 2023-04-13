// Write a program to search an element in a matrix
#include <stdio.h>
int main()
{
    int row, column, num, flag = 0;
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
    printf("Enter the value to be searched:");
    scanf("%d", &num);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            if (num == a[i][j])
            {
                printf(" \n %d found at index[%d,%d]", num, i, j);
                flag = 1;
            }
    }
    if (flag == 0)
        printf("\n %d not found in the matrix", num);

    return 0;
}