#include <stdio.h>
int main()
{
    int a[5], b[5], i, temp;

    printf("Enter 5 integers of a : ");
    for ( i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter 5 integers of b: ");
    for ( i = 0; i < 5; ++i)
    {
        scanf("%d", &b[i]);
    }
    printf(" before swapping elements are \n");
    for ( i = 0; i < 5; ++i)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
    for ( i = 0; i < 5; ++i)
    {
        printf(" %d ", b[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    printf("after swapping elements are \n");
    for ( i = 0; i < 5; ++i)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
    for ( i = 0; i < 5; ++i)
    {
        printf(" %d ", b[i]);
    }
    return 0;
}