#include<stdio.h>
#include<rupesh.h>

int fib(int n) ;

int main(void)
{
    int n;

    printf("Enter range: ");
    n = inputInt();

    for(int i = 0; i<n; i++)
    {
        printf("%lu ", fib(i));
    }

    printf("\n\n");
    return 0;
}

int fib(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    
    return fib(n-1)+fib(n-2);
}