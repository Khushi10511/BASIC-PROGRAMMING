#include <stdio.h>
int main()
{
    int x, y, s, d1, p, d2;
    printf("ENTER TWO NO'S");
    scanf("%d%d", &x, &y);
    s = x + y;
    d1 = x - y;
    p = x * y;
    d2 = x / y;
    printf("SUM=%d \n", s);
    printf("DIFFERENCE=%d \n", d1);
    printf("PRODUCT=%d \n", p);
    printf("DIVISION=%d", d2);
    return 0;
}