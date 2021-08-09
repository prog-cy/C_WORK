#include<stdio.h>
#include<rupesh.h>
#include<math.h>

void find_sum(int , float *);
long int fact(int );

int main(void)
{
    float sum = 0.0;

    find_sum(10, &sum);

    printf("Sum of sin series up to 10 terms: %0.3f\n\n", sum);

    return 0;
}

long int fact(int n)
{
    int f = 1;

    for(int i = 1; i<=n; i++)
    {
        f*=i;
    }

    return f;

}

void find_sum(int n, float *sum)
{
    for(int i = 0; i<n; i++)
    {
        int odd = (2 * i + 1);
        float term = pow(2, odd) / fact(odd);

        if (i % 2 == 0)
            *sum += term;
        else
        {
            *sum-=term;
        }
        
    }
}