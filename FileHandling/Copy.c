// calling by reference
#include <stdio.h>

int swap(int *, int *); // function prototype
int main()
{
    int a = 10, b = 20;
    printf("a=%d, b=%d\n", a, b);
    swap(&a, &b); // function call here we are passing the address of the variable 'a' and 'b'
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

int swap(int *x, int *y) // function definition here we are using 'value at address' operator '*'
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    return 0;
}