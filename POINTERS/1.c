// introduction
#include <stdio.h>

int main()
{
    int i = 100;
    int *ptr;
    ptr = &i;
    printf("value of i=%d\n", i);
    printf("value of ptr=%p\n", ptr);
    printf("Address of i=%p\n", &i);
    printf("Address of ptr=%p\n", &ptr);
    printf("value of i pointed by ptr=%d\n", *ptr);
    printf("value of i at address of i=%d\n", *(&i));

    return 0;
}