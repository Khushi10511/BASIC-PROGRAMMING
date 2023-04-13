// WAP IN C  to print diagonal elements of a 2D MATRIX.
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
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (i == j || i + j == 2)
                printf(" %d ", a[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}