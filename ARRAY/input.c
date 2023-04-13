#include <stdio.h>

int main()
{
   int values[10];

   printf("Enter 10 integers: \n");

   // taking input and storing it in an array
   for (int i = 0; i < 10; ++i)
   {
      printf("enter %d element \n", i);
      scanf("%d", &values[i]);
   }

   printf("Displaying integers: \n");

   // printing elements of an array
   for (int i = 0; i < 10; ++i)
   {
      printf("%d\n", values[i]);
   }
   return 0;
}