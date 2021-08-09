#include<stdio.h>
#include<rupesh.h>

int N_sum(int n);

int main(void)
{
    int n;

    printf("Enter range: ");
    n = inputInt();

    printf("sum of first %d natural is %d\n" ,n, N_sum(n));

    return 0;
}

int N_sum(int n)
{
    if(n == 1)
        return 1;
    return n+N_sum(n-1);
}