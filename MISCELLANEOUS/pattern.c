/**         *         *
  ***       ***       ***
  *****     *****     *****
  *******   *******   *******
  ********* ********* *********
  *******   *******   *******
  *****     *****     *****
  ***       ***       ***
  *         *         *    */
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        for (k = 8; k >= 2 * i - 2; k--)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        for (k = 8; k >= 2 * i - 2; k--)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        for (k = 8; k >= 2 * i - 2; k--)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        for (k = 8; k >= 2 * i - 2; k--)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}