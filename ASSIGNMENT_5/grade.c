#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, total, percent;
    char grade;
    printf("ENTER THE MARKS OBTAINED IN 4 SUBJECTS");
    scanf("%f", &m1);
    scanf("%f", &m2);
    scanf("%f", &m3);
    scanf("%f", &m4);
    total = m1 + m2 + m3 + m4;
    percent = ((total / 400.0) * 100.0);
    if (percent >= 90.0)
        grade = 'O';
    else if (percent >= 80.0)
        grade = 'E';
    else if (percent >= 70.0)
        grade = 'A';
    else if (percent >= 60.0)
        grade = 'B';
    else if (percent >= 50.0)
        grade = 'C';
    else if (percent >= 40.0)
        grade = 'D';
    else
        grade = 'F';
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
    printf("GRADE OBTAINED: %c", grade);
    return 0;
}
