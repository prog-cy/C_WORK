#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n > 0)
        printf("absolute value of %d is %d\n", n, n);
    else
    {
        printf("absolute value of %d is %d\n", n, -(n));
    }

    getch();
}