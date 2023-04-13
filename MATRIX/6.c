//WAP TO FIND OUT THE SUM OF EACH ROW AND EACH COLUMN ELEMENTS OF A 4X4 MATRIX AND DISPLAY RESPECTIVELY.
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the value of row and column");
    scanf("%d%d", &row, &column);
    int a[row][column], sum = 0, i, j;
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
     for (i = 0; i < row; ++i) 
        {
            for (j = 0; j < column; ++j) 
            {
                sum = sum + a [i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
        sum = 0;
        for (j = 0; j < column; ++j) 
        {
            for (i = 0; i < row; ++i)
            {
                sum = sum + a [i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
 
    }