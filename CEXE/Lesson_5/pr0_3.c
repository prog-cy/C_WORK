// Program to calculate the power of a number
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int base, pow, i = 0, mul = 1;
    printf("Enter base: ");
    base  = inputInt();

    printf("Enter number raised to base: ");
    pow = inputInt();

    while (i<pow)
    {
        mul*=base;
        i++;
    }

    printf("%d raised power %d is %d", base, pow,mul);
    return 0;
    
}