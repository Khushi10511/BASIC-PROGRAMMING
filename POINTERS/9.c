// Q2) WAP to sort an array using Pointer.
#include <stdio.h>
void sort();
int main()
{
    int n;
    printf("Enter no of elements of array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array :");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(n, arr);
    return 0;
}
void sort(int n, int *ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (*(ptr + j) < *(ptr + i))
            {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    printf("SORTED ARRAY : \n");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
