#include <stdio.h>
void main()
{
    int n, i, j;
    char c;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = 'A' + i - 1;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c = c - 1;
        }
        printf("\n");
    }
}