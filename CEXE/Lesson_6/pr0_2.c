// program to add first seven term of a series
#include<stdio.h>

int main(void)
{
    int  j, fact;
    float term, sum= 0,i;


    for(i=1; i<=7; i++)
    {
        fact = 1;
        for(j = i; j>=1; j--)
            fact*=j;

        term = i/fact;
        sum+=term;
    }

    printf("Sum of first seven term of series is: %0.4f ", sum);

    return 0;
}