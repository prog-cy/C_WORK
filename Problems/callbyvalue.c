//calling by value

#include <stdio.h>

int swap(int, int);
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
}

int swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("x=%d, y=%d\n", x, y);
}