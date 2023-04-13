#include <stdio.h>
int main()
{
    int a[5], i, sum=0;

    printf("Enter 5 integers: ");

    // taking input and storing it in an array
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum +a[i];
    }
    printf(" sum of elements is %d",sum);

    return 0;
}
