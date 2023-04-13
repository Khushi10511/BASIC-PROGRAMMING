

#include <stdio.h>
int main()
{
    int a[5], b[5], sum[5],i;

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter 5 integers: ");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
        printf("sum of %d and %d is %d \n", a[i], b[i], sum[i]);
    }
    return 0;
}