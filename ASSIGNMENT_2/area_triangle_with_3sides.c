#include <stdio.h>
#include <math.h>
void main()
{
 float s, a, b, c, area;
 printf("Enter the values of a, b and c \n");
 scanf("%f %f %f", &a, &b, &c);
 s = (a + b + c) / 2;
 area = sqrt(s * (s - a) * (s - b) * (s - c));
 printf("Area of a triangle = %f \n", area);
 
}