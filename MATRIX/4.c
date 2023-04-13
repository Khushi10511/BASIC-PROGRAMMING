// WAP IN C  to Transpose a  2D MATRIX
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column :\n");
    scanf("%d%d", &row, &column);
    int a[row][column], a_t[column][row], i, j;
    printf("enter the value of array: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            a_t[j][i] = a[i][j];
    }
    printf("the value of matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("TRANSPOSE OF MATRIX IS : \n");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
            printf(" %d ", a_t[i][j]);

        printf("\n");
    }
    return 0;
}