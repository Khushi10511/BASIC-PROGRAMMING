// Write a program in C to reverse the elements of the given araay and store in the same araay without using extra araay
#include <stdio.h>
int main()
{
    int n_2001, c_2001, num_2001, i, j, temp;
    printf("Enter the no of elements of araay\n");
    scanf("%d", &n_2001);
    int a_2001[n_2001];
    printf("enter %d integer numbers:", n_2001);
    for (i = 0; i < n_2001; i++)
    {
        scanf("%d", &a_2001[i]);
    }
    
    for (i = 0,j = n_2001 - 1; i < j; i++, j--)
    {

        temp = a_2001[i];

        a_2001[i] = a_2001[j];

        a_2001[j] = temp;
    }
    printf("Reverse of aaray is", n_2001);
    for (i = 0; i < n_2001; i++)
    {
        printf(" %d ", a_2001[i]);
    }
}
