#include <stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (l = n; l > i; l--)
            printf(" ");
            
        for (j = 1; j < i; j++)
            printf("%d", j);

        for (k = i; k >= 1; k--)
            printf("%d", k);

        printf("\n");
    }
    return 0;
}