// C Program to print the frequency of nth element in the array.
#include <stdio.h>
int main()
{
    int a[10], i, n, p, c = 0;

    printf("Enter 10 integers: \n");

    // taking input and storing it in an array
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of no whose frequency you want to find");
    scanf("%d", &p);
    n = a[p - 1];
    for (int i = 0; i < 10; ++i)
    {
        if (n == a[i])
            c++;
    }
    printf(" The no to be found is %d and its frequency is %d:", n, c);
    return 0;
}
