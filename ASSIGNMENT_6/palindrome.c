#include <stdio.h>
int main()
{
    int n, rev = 0, r, num;
    printf("Enter a no:");
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (rev == num)
        printf(" %d is a palindrome no", num);
    else
        printf(" %d is not a palindrome no", num);
    return 0;
}