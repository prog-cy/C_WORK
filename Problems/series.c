#include<stdio.h>

int fun(int );
int main()
{
    int n;
    unsigned long s;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    s=fun(n);
    printf("Sum of the series is: %d\n",s);
    return 0;
}

int fun(int n)
{
    unsigned long sum=0;
    if(n==1)
        return 1;
    else
    {
        sum+=n*n+fun(n-1);
    }
    return sum;
}