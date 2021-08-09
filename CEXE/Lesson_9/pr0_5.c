#include <stdio.h>
#include <rupesh.h>
#include <math.h>

void area(float, float, float, double *);

int main(void)
{
    float s1, s2, s3;
    printf("Enter first side : ");
    s1 = inputInt();

    printf("\nEnter second side: ");
    s2 = inputInt();

    printf("\nEnter third side: ");
    s3 = inputInt();

    double a = 0.0;
    area(s1, s2, s3, &a);

    printf("\nArea of triangle is: %0.2lf\n\n", a);

    return 0;
}

void area(float s1, float s2, float s3, double *a)
{
    float s = (s1 + s2 + s3) / 2.0;

    double exp = s * (s - s1) * (s - s2) * (s - s3);

    *a = sqrt(exp);
}