/*WAP TO swap the respective elements in reverse order of two integer array of size 10
example-
A-1 ,2 ,3, 4, 5
B-10, 20, 30,40, 50
after swaping
A-50,40,30,20,10
B-  5, 4, 3, 2, 1 */
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
        a[i] = b[4-i];
        b[4-i] = temp;
    }
    printf("after swapping varibles are \n");
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