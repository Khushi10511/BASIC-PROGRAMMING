//WAP in C TO FIND THE MAXIMUM AND MINIMUM ELEMENT OF AN ARRAY OF 5 INTEGERS
#include <stdio.h>
int main()
{
    int a[5], i, max = 0, min;

    printf("Enter 5 integers: ");

    // taking input and storing it in an array
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < 5; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("max no is %d and min no is %d", max, min);

    return 0;
}
