// using strcmp function
#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array  
   int value; // declaration of integer variable  
   printf("Enter the first string : ");  
   gets(str1);  
   printf("Enter the second string : ");  
   gets(str2);  
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str2);  
   if(value==0)  
   printf("strings are same");  
   else  
   if(value > 0)
   printf("second string %s is alphabetically first",str2); 
   else
    printf("first string %s is alphabetically first",str1); 
   return 0;  
} 