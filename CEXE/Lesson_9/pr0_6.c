#include <stdio.h>
#include <rupesh.h>
#include <math.h>

void cal_distance(float x1, float x2, float x3, float y1, float y2, float y3, float *a, float *b, float *c);

float find_area(float a, float b, float c);
int check_point_position(float A, float A1, float A2, float A3);

int main(void)
{
    float x1, x2, x3, y1, y2, y3, a, b, c, x, y;

    float A, A1, A2, A3;

    printf("Enter A(x1, y1)\n");
    x1 = inputInt(), y1 = inputInt();

    printf("\nEnter B(x2, y2)\n");
    x2 = inputInt(), y2 = inputInt();

    printf("\nEnter C(x3, y3)\n");
    x3 = inputInt(), y3 = inputInt();

    printf("\nEnter P(x, y)\n");
    x = inputInt(), y = inputInt();

    a = 0, b = 0, c = 0;
    cal_distance(x1, x2, x3, y1, y2, y3, &a, &b, &c);
    A = find_area(a, b, c);

    cal_distance(x1, x2, x, y1, y2, y, &a, &b, &c);
    A1 = find_area(a, b, c);
    
    cal_distance(x1, x, x3, y1, y, y3, &a, &b, &c);
    A2 = find_area(a, b, c) ;
    
    cal_distance(x, x2, x3, y, y2, y3, &a, &b, &c);
    A3 = find_area(a, b, c) ;

    if (check_point_position(A, A1, A2, A3))
        printf("P(%0.0f, %0.0f)  lies inside the triangle\n", x, y);
    else
    {
        printf("P(%0.0f, %0.0f) does not lie inside the triangle\n", x, y);
    }

    return 0;
}

void cal_distance(float x1, float x2, float x3, float y1, float y2, float y3, float *a, float *b, float *c)
{
    *a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    *b = sqrt(((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));

    *c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
}

float find_area(float a, float b, float c)
{
    float s = (a + b + c) / 2;

    double A = sqrt(s * (s - a) * (s - b) * (s - c));

    return A;
}

int check_point_position(float A, float A1, float A2, float A3)
{
    if ((A1+A2+A3) == A)
        return 1;
    else
        return 0;
}