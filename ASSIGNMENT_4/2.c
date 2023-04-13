#include <stdio.h> 
int main()
{
 char Ch;
 printf("\n Please Enter any alphabet\n");
 scanf(" %c", &Ch);
 if (Ch>=97 && Ch<=122)
 { 
 Ch = Ch-32; 
 printf ("\n Uppercase of Entered character is %c", Ch);
 }
 else
 printf("\n You Already Entered Uppercase Character");
 return 0;
} 