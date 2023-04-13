// Q8)WAP to find the factorial of a number n by using recursion.
#include <stdio.h>
int main()
{
    int n, b;
    printf("enter a no to be checked :");
    scanf("%d", &n);
    int fact(int x);
    b = fact(n);
    printf("the factorial of %d is %d", n, b);
    return 0;
}
int fact(int x)
{
    int res;
    if (x == 0)
        res = 1;
    else
        res = x * fact(x - 1);
    return res;
}