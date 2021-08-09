#include<stdio.h>
#define AREA(x) (3.142*x*x)

int main(void)
{
    float r1 = 6.2, r2 = 5.5;

    float a1 = AREA(r1);

    printf("Area of the circle whose radius is %0.2f is %f\n", r1, a1);

    float a2 = AREA(r2);

    printf("Area of the circle whose radius is %0.2f is %f\n", r2, a2);

    return 0;

}