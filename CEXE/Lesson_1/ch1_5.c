#include <stdio.h>

int main()
{
    int l, b, r;
    int R_A, R_P;
    float C_A, C_C;

    printf("Enter the values:\n");
    scanf("%d%d%d", &l, &b, &r);
    R_A = l * b;
    R_P = 2 * (l + b);
    C_A = 3.14 * r * r;
    C_C = 2 * 3.14 * r;
    printf("Area of the rectangle is:%d Perimeter of the rectangle is:%d\n", R_A, R_P);
    printf("Area of Circle is:%0.2f Circumference of the circle is:%0.2f", C_A, C_C);

    return 0;
}