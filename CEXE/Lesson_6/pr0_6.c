// program to calculate total amount after n year when interest compounds q times per year at rate r
#include<stdio.h>
#include<rupesh.h>
#include<math.h>

int main(void)
{
    int q;
    float p, a, n, t, r;

    for(int i= 0 ; i<10; i++)
    {
        printf("Enter principal amount p: ");
        p = inputFloat();

        printf("\nEnter q: ");
        q = inputInt();

        printf("\nEnter rate r: ");
        r = inputFloat();

        printf("\nEnter time n: ");
        n = inputInt();
        
        // logic to calculate total amount
        r = r/100;
        t = 1 + r/q;
        a = p*pow(t, n*q);

        printf("Amount is: %0.2f(Rs)\n", a);

    }

    return 0;
}