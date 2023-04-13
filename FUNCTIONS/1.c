// Q1)WAP to swap the values of two variables by using a suitable user defined function (say SWAP) for it.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("\n Values before swapping are %d and %d", a, b);
    int swap(int x, int y);
    swap(a, b);
    return 0;
}
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf(" \n Values after  swapping are %d and %d", x, y);
}