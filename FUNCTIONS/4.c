// Q4)WAP to find out the sum of digits of a number n by suing function.
#include <stdio.h>
int main()
{
    int a, s;
    printf("Enter a no  :");
    scanf("%d", &a);
    int sum(int x);
    s = sum(a);
        printf("Sum of digits of % d is % d", a,s);
    
    return 0;
}
int sum(int x)
{
    int r, sum=0;
    while (x > 0)
    {
        r = x % 10;
        sum= sum +r;
        x = x / 10;
    }
    return sum;
}