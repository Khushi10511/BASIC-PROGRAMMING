// WAP to copy value from x to y using pointer 
#include <stdio.h>
int main()
{
    int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);
}
