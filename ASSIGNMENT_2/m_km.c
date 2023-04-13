#include <stdio.h>
void main()
{
    int e, km, m;
    printf("Enter the value in meter:");
    scanf("%d", &e);
    km = e / 1000;
    m = e % 1000;
    printf(" %d meter = %d km and %d m", e, km, m);
}