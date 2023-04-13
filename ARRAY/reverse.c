#include <stdio.h>

int main()
{
    int values[10];

    printf("Enter 10 integers: ");

    // taking input and storing it in an array
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &values[i]);
    }

    printf("Displaying integers in reverse: \n");

    // printing elements of an array in reverse
    for (int i = 9; i >= 0; --i)
    {
        printf("%d\n", values[i]);
    }
    return 0;
}