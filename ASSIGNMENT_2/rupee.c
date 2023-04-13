#include <stdio.h>
int main()
{
int tp,rs,ep;
printf("Enter Total Paisa : ");
scanf("%d",&tp);
rs = tp / 100;
ep = tp % 100;
printf("\nTotal Paisa = %d",tp);
printf("\nConverted Paisa in Rs is %d rupees and %d paise",rs,ep);
return 0;
}