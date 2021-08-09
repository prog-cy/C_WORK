#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, sum;
    float per;

    printf("Enter the marks of the students: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    sum = s1 + s2 + s3 + s4 + s5;

    per = sum / 5;

    printf("Aggerate marks:%d  Percentage:%0.1f", sum, per);
}