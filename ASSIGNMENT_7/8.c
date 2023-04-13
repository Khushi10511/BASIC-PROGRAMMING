#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter a no: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = i; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}