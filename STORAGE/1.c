// variable scope 
#include <stdio.h>
void main()
{
     int a = 10, b = 20, c = 30, d = 40;
    printf("%d %d %d %d \n", a, b, c, d);
    {
        int a = 1, b = 2, c = 3, d = 4;
        printf("%d %d %d %d \n", a, b, c, d);
        {
            int a = 100, b = 200, c = 300, d = 400;
            printf("%d %d %d %d \n", a, b, c, d);
        }
        printf("%d %d %d %d \n", a, b, c, d);
    }
    printf("%d %d %d %d \n", a, b, c, d);
}
