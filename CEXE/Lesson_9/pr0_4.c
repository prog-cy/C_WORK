#include<stdio.h>

void swap_three_digits(int *, int *, int *);

int main(void)
{
    int x, y, z;
    
    int *a, *b, *c;

    x = 5, y = 8, z = 10;
    a = &x, b = &y, c = &z;

    printf("Before shifting\n");
    printf("x = %d, y = %d, z = %d\n", *a, *b, *c);

    swap_three_digits(a, b,c);
    printf("After shifting\n");

    printf("x = %d, y = %d, z = %d\n\n", *a, *b, *c);

    return 0;
}

void swap_three_digits(int *n1, int *n2, int *n3)
{
    int temp;

    temp = *n1;
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;
}