// Program to calculate factorial of a number
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int num, i = 1;
    long int fact = 1;
    printf("Enter number: ");
    num = inputInt();

    while (i<=num)
    {
        fact = fact*i;
        i++;

    }

    printf("Factorial of %d is %ld\n", num, fact);
    return 0;
    
}