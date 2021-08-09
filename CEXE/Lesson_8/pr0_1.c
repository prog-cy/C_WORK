// Calculate factorail using function
#include <stdio.h>
#include <rupesh.h>

long int Fact(int);
int main(void)
{
    int n;

    long int fact;
    printf("Enter number: ");
    n = inputInt();

    fact = Fact(n);

    printf("Factorial of %d is %ld\n", n, fact);

    return 0;
}


// Function to find factorial of a number
long int Fact(int n)
{
    long int fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}