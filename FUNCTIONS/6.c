// Q.6)WAP to calculate GCD/HCF of two numbers by using a recursive function for GCD.
#include <stdio.h>
int main()
{
    int a, b, h;
    printf("enter the values of a and b:");
    scanf("%d%d", &a, &b);
    int hcf(int n1, int n2);

    h = hcf(a, b);
    printf("HCF of %d and %d is %d", a, b, h);
    return 0;
}
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
