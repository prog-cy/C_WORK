// Program to calculate sum of the given series by the use of that natural log can be approximated
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    float sum = 0.0, t, next_t, n;
    printf("Enter n: ");
    n = inputFloat();

    t = (n-1)/n;

    sum = t;

    for(int i=1; i<7; i++)
    {
        next_t = 1;
        for(int j=0; j<=i; j++)
            next_t*=t;
        sum+=(0.5)*next_t;
    }

    printf("Sum is: %0.4f\n\n", sum);

    return 0;
}