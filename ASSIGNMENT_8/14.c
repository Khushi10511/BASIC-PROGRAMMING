// WAP to insert a new element in a specific position of  array of 10 integers
#include <stdio.h>

int main()
{
    int a[11];
    int i, x, pos, n = 10;

    printf("Enter 10 integers: \n");

    // taking input and storing it in an array

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &a[i]);
    }

    // print the original array
    printf("The original array is :");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // element to be inserted
    printf("enter element to be inserted ");
    scanf("%d", &x);
    // position at which element is to be inserted
    printf("enter position where you want to insert the element  ");
    scanf("%d", &pos);

    // increase the size by 1
    n++;

    // shift elements forward
    for (i = n - 1; i >= pos; i--)
        a[i] = a[i - 1];

    // insert x at pos
    a[pos - 1] = x;

    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}