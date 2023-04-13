// two print the sum of all multiples of a and b upto n..
#include <stdio.h>
void main()
{
    int n, a, b, s = 0;
    
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    
    printf("\n  Multiples of % d and %d are : \n", a, b);
    for (int i = 1; i < n; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            printf("%d ", i);
            s = s + i;
        }
    }
    printf(" \nthe sum is : %d", s);
    return ;
}