// WAP IN C to print the upper triangular matrix AND FIND THE SUM OF ELEMENTS.
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column");
    scanf("%d%d", &row, &column);
    int a[row][column], sum = 0, i, j;
    printf("enter the value of array a : \n");
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
            if (j >= i)
            {
                printf(" %d ", a[i][j]);
                sum = sum + a[i][j];
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("sum of upper traingle elememts is %d", sum);
}
