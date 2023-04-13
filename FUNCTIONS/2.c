#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a no to be checked :");
    scanf("%d", &a);
    int palindrome(int x);
    b = palindrome(a);
    if (b == a)
        printf("%d is palindrome no", a);
    else
        printf("%d is not a palindrome no", a);
    return 0;
}
int palindrome(int x)
{
    int r, rev = 0;
    while (x > 0)
    {
        r = x % 10;
        rev = rev * 10 + r;
        x = x / 10;
    }
    return rev;
}// Q2)WAP to test whether  a number n is palindrome number or not
