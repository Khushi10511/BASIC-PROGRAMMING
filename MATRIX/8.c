// Multiplication of matrix
#include <stdio.h>
int main()
{
#define ROW1 2
#define COL1 2
#define ROW2 COL1
#define COL2 2

    int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
    int i, j, k;
    // matrix 1 value
    printf(" Enter matrix 1(%d * %d)row wise :\n", ROW1, COL1);
    for (i = 0; i < ROW1; i++)
        for (j = 0; j < COL1; j++)
            scanf("%d", &mat1[i][j]);
    // matrix 2 value
    printf("Enter matrix 2 (%d * %d)row wise :\n", ROW1, COL2);
    for (i = 0; i < ROW2; i++)
        for (j = 0; j < COL2; j++)
            scanf("%d", &mat2[i][j]);
    // printing values of matrix 1
    printf("Matrix 1:\n");
    for (i = 0; i < ROW1; i++)
    {
        for (j = 0; j < COL1; j++)
            printf("%5d", mat1[i][j]);
        printf("\n");
    }
    // printing value of matrix 2
    printf("Matrix 2:\n");
    for (i = 0; i < ROW2; i++)
    {
        for (j = 0; j < COL2; j++)
            printf("%5d", mat2[i][j]);
        printf("\n");
    }
    // mutiplication
    for (i = 0; i < ROW1; i++)
        for (j = 0; j < COL2; j++)
        {
            mat3[i][j] = 0;
            for (k = 0; k < COL1; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    // printing value of matrix 3
    printf("The resultant matrix 3 is : \n");
    for (i = 0; i < ROW1; i++)
    {
        for (j = 0; j < COL2; j++)
            printf("%5d", mat3[i][j]);
        printf("\n");
    }
    return 0;
}
