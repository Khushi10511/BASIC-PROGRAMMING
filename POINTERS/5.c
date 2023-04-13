// call by reference
#include <stdio.h>
void swap(int *,int *);
void main()
{
    int a = 10, b = 20;
    printf("Before swap :%d %d \n", a, b);
    swap(&a, &b);
    printf("After swap :%d %d", a, b);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}