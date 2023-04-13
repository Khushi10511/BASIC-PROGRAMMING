// WAP tp print the sum of digits of a number upto single digit
#include <stdio.h>
int main()
{
    int n, sum, rem;
    printf("enter a no");
    scanf("%d", &n);
    while (n / 10 != 0)
    {
        sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum += rem;
            n = n / 10;
        }

        n = sum;
    }
    printf("sum of digits upto single digit is %d", sum);
}
