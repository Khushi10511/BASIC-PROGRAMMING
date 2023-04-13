#include <stdio.h>
int main()
{
    float r, Area;
    printf("Enter the radius of circle");
    scanf("%f", &r);
    Area = 3.14 * r * r;
    printf("the area of the circle is %f", Area);
    return 0;
}