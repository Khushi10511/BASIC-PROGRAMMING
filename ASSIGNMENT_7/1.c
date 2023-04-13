#include <stdio.h>
int main()
{
    int n, i, s = 0, sum = 0, a;
    printf("Enter value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (a = 1; a <= i; a++)
        {
            s = s + a;
        }
        sum = sum + s;
    }
    printf("The sum of the series is %d", sum);
}