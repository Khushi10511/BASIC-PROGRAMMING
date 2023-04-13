// using realloc and free
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main () 
{
   char *str;
   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "Learning C ");
   printf("String = %s,  Address = %u\n", str, str);
   /* Reallocating memory */
   str = (char *) realloc(str, 35);
   strcat(str, "++ is fun");
   printf("String = %s,  Address = %u\n", str, str);
   free(str);
   printf("String is %s",str);
   return(0);
}
