// WAP in C TO SWAP THE ODD NUMBER ROWS VALUES  AND EVEN ROWS VALUES OF 4X4 MATRIX
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column");
    scanf("%d%d", &row, &column);
    int a[row][column], i, j, t;
    printf("enter the value of array  a : \n");
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
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (i % 2 == 1)
            {
                t = a[i][j];
                a[i][j] = a[i - 1][j];
                a[i - 1][j] = t;
            }
        }
    }
    printf("Swapped matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
