// Q3)WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.

#include <stdio.h>
int main()
{
    int n, b;
    printf("Enter a no to be checked :");
    scanf("%d", &n);
    int fact(int x);
    b = fact(n);
    printf(" \nThe factorial of %d is %d", n, b);
    return 0;
}
int fact(int x)
{
    int i, s = 1;
    for (i = 1; i <= x; i++)
    {
        s = s * i;
    }
    return s;
}