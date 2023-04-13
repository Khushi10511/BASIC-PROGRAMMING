// write a program to sort the elements of a matrix row wise
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column :");
    scanf("%d%d", &row, &column);
    int a[row][column], i, j, temp, k;
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
            for (k = 0; k < j; k++)

                if (a[i][k] > a[i][j])
                {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
        }
    }
    printf("The sorted array is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}