#include<stdio.h>

int main()
{
    int i,n;
    long int fact=1;
    printf("Enter the numebr: ");
    scanf("%d",&n);
    i=n;

    while(i>=1)
    {
        fact*=i;
        i--;

    }
    printf("Factorial of %d is %ld\n",n,fact);
    return 0;
    
}