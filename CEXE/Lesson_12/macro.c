// Defining a macro
#include <stdio.h>
#define PI 3.1423 // PI is known as macro template and 3.1423 is known as macro expansion

int main(void)
{
    float r = 6.25, area;

    area = PI*r*r;

    printf("Area of circle = %f\n", area);

    return 0;
}