#include <stdio.h>
int main()
{
    int x, n, i, y = 1;
    printf("\n Enter values for x and n =");
    scanf("%d%d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        y = y * x;
    }
    printf("%d to the power %d is %d", x, n, y);
    return 0;
}