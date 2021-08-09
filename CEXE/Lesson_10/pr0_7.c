#include<stdio.h>
#include<rupesh.h>

int PF(int n);

int main(void)
{
    int n;

    printf("Enter number: ");
    n = inputInt();

    printf("\b\b = %d\n", PF(n));

    return 0;
}

int PF(int n)
{
    int i = 2;
    if(n == 1)
        return 1;
        
    while(n%i != 0)
        i++;

    printf("%d X ", i);
    return i*PF(n / i);
}