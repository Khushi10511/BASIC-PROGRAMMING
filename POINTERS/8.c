// Q1) WAP to add two numbers using call by references
#include <stdio.h>
int add(int *, int *);
void main()
{
    int a, b, sum;
    printf("Enter value of a and b:");
    scanf("%d %d", &a, &b);
    sum = add(&a, &b);
    printf("SUM : %d", sum);
}
int add(int *x, int *y)
{
    int sum;
    sum = *x + *y;
    return sum;
}