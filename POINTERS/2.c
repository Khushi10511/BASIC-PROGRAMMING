// pointer to pointer
#include <stdio.h>
int main()
{
    int a = 5;
    int *p1;
    int **p2;
    p1 = &a;
    p2 = &p1;
    printf("Value of a=%p\n", a);
    printf("\n");
    printf("value of p1=%p\n", p1);
    printf("\n");
    printf("value of p2=%p\n", p2);
    printf("\n");
    printf("address of a :%p \n", &a);
    printf("\n");
    printf("address of p1 :%p \n", &p1);
    printf("\n");
    printf("address of p2 :%p \n", &p2);
    printf("\n");
    printf("value of *p1=%p\n", *p1);
    printf("\n");
    printf("value of *p2=%p\n", *p2);
    printf("\n");
    printf("value of **p2=%p\n", **p2);
}
