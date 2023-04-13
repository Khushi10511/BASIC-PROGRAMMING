// WAP TO count the number of even, odd ,zero and negative  number in array of 20 integers
#include <stdio.h>

int main()
{
    int a[20], i;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    printf("Enter 20 integers: \n");

    // taking input and storing it in an array
    for (int i = 0; i < 20; ++i)
    {

        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 20; ++i)
    {
        if (a[i] == 0)
        {
            c1++;
            continue;
        }
        if (a[i] < 0)

        {
            c2++;
            continue;
        }
        if (a[i] % 2 == 0)

        {
            c3++;
            continue;
        }
        if (a[i] % 2 == 1)
        {
            c4++;
            continue;
        }
    }
    printf("\nno of zeroes in array is %d", c1);
    printf("\nno of negative no's in array is %d", c2);
    printf("\nno of even no's in array is %d", c3);
    printf("\nno of odd no's in array is %d", c4);
    return 0;
}
