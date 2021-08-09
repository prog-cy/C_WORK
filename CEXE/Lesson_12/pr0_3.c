#include<stdio.h>
#include"areaperi.h"

int main(void)
{
    int a, b, c;
    int s;
    float r;

    printf("Enter side of the triangle ");
    scanf("%d%d%d", &a, &b, &c);

    printf("\nEnter side of the square ");
    scanf("%d", &s);

    printf("\nEnter radius of a circle ");
    scanf("%f", &r);

    printf("\nPerimeter of the triangle= %d\n", TPERI(a,b,c));
    printf("Area of the triangle = %f\n", TAREA(a, b,c));

    printf("Perimeter of the square = %d\n", SPERI(s));
    printf("Area of the square = %d\n", SAREA(s));

    printf("Perimeter of the circle = %f\n" , CPERI(r));
    printf("Area of the circle = %f\n", CAREA(r));

    return 0;
    
}