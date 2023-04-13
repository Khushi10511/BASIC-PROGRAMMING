//Q5) WAP to find the number of times that a given word occurs in a sentence
#include<stdio.h>
#include<string.h>
int main()
{
   char str[100], word[20],*s,*w;
   int i, j, ls, lw, temp, count=0, chk;
   printf("Enter the String: ");
   gets(str);
   s=str;
   printf("Enter a Word: ");
   gets(word);
   w=word;
   ls = strlen(str);
   lw = strlen(word);
   for(i=0; i<ls; i++)
   {
      temp = i;
      for(j=0; j<lw; j++)
      {
         if(s[i] == w[j])
            i++;
      }
      chk = i-temp;
      if(chk==lw)
         count++;
      i = temp;
   }
   printf("\nOccurrence = %d", count);
   return 0;
}