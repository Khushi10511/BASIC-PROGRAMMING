// Q7)WAP to compute the cosine series using function. (x)=1-x2/2!+x4/4!-x6/6!+ ……..
#include <stdio.h>
int main()
{
    int x1, n1;
    double sum_series;
    printf("Enter value of x and n:");
    scanf("%d%d", &x1, &n1);
    double sum(int x, int n);
    sum_series = sum(x1, n1);
    printf("\n Sum of series  = %lf", sum_series);
    return 0;
}
double sum(int x, int n)
{
    int i, j, c = 1;
    double s = 1,p,f;
    printf("1");
    for (i = 2; i <= n; i = i + 2)
    {
        c++;
        f = 1;
        p = 1;
        for (j = 1; j <= i; j++)
        {
            f = f * j;
            p = p * x;
        }
        if (c % 2 == 0)
        {
            s = (double)s - (p / f);
            printf("- %lf/%lf ", p, f);
        }
        else
        {
            s = (double)s + (p / f);
            printf("+ %lf/%lf ", p, f);
        }
    }
    return s;
}