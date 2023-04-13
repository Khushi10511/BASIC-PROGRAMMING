// Q5)WAP to design a user defined function (say SUM-ARRAY) to calculate the sum of all the integers stored in the array.
#include <stdio.h>
int main()
{
    int sum = 0, i;
    int array[10];
    printf("Enter the elements of array: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    int sum_array(int *arr, int n);

    sum = sum_array(array, 10);

    printf("\nThe sum of all array elements is : %d", sum);

    return 0;
}
int sum_array(int *arr, int n)
{
    int i = 0, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
