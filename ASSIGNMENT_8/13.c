/*WAP  to replace the first half elements with lasthalf elements of 10 integers.
example-
input-   1,2,3,4,5,6,7,8,9,10.
output-  6,7,8,9,10,1,2,3,4,5.*/
#include <stdio.h>

int main()
{
    int a[10], i, c, j, temp;

    printf("Enter 10 integers: \n");

    // taking input and storing it in an array
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0, j = 5; i < j && j < 10; i++, j++)
    {

        temp = a[i];

        a[i] = a[j];

        a[j] = temp;
    }

    printf("Reverse of aaray is");
    for (i = 0; i < 10; i++)
    {
        printf(" %d ", a[i]);
    }
}