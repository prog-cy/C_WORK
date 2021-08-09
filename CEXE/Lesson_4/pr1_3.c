// program to check sin^2(@)+cos^2(@) = 1 or not
#include<stdio.h>
#include<rupesh.h>
#include<math.h>

int main(void)
{
    float val;
    printf("Enter angle(in degree): ");
    val = inputFloat();

    float a = sin(val)*sin(val);
    float b = cos(val)*cos(val);

    (a+b == 1)?printf("Squares of sin and cosine of %.1f anlge is 1", val):printf("Squares of sin and cosine of %.1f anlge is 1", val);

    return 0;
}