#include <stdio.h>
int main()
{
    int choice;
    float m1, m2, m3, m4, total, percent;
    char grade;
    printf("ENTER THE MARKS OBTAINED IN 4 SUBJECTS \n");
    scanf("%f", &m1);
    scanf("%f", &m2);
    scanf("%f", &m3);
    scanf("%f", &m4);
    total = m1 + m2 + m3 + m4;
    percent = ((total / 400.0) * 100.0);
    choice = percent / 10;
    printf("MARKS OBTAINED IN 4 SUBJECTS ARE: \n");
    printf("%f \t %f \t %f \t %f \n", m1, m2, m3, m4);
    printf("TOTAL SECURED MARKS:%f \n", total);
    printf("PERCENTAGE:%f \n", percent);
    printf("PERCENT GRADE \n");
    printf("----------------- \n");
    printf(">=90.0 O \n");
    printf(">=80.0 E \n");
    printf(">=70.0 A \n");
    printf(">=60.0 B \n");
    printf(">=50.0 C \n");
    printf(">=40.0 D \n");
    printf("<=30.0 F \n");
    printf("----------------- \n");
    switch (choice)
    {
    case 9:
        printf("\nSecured grade is O");
        break;
    case 8:
        printf("\nSecured grade is E");
        break;
    case 7:
        printf("\nSecured grade is A");
        break;
    case 6:
        printf("\nSecured grade is B");
        break;
    case 5:
        printf("\nSecured grade is C");
        break;
    case 4:
        printf("\nSecured grade is D");
        break;
    default:
        printf("FAIL");
    }
    return 0;
}
