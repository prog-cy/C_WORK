#include<stdio.h>
#include<rupesh.h>

int P_factor(int n);
int PF(int n);

int main(void)
{
    int n;
    printf("Enter number for which you want to calculate the prime factors: ");
    n = inputInt();

    printf("Prime factors without non recursive approach\n");
    printf("\b 1 = %d\n", P_factor(n));

    printf("Prime factor with recursive approach\n");
    printf("\b 1 = %d\n", PF(n));

    //PF(n);

    return 0;
}

//Using non recursive approach
int P_factor(int n)
{
    int i = 2;
    int n1 = n;
    while(n>1)
    {
        while (n%i != 0)
        {
            i++;
        }
        printf("%d X ", i);
        n = n/i;
        
    }

    return n1;
}

// Using recursive approach
int PF(int n)
{
    int i = 2;
    if(n == 1)
        return 1;
    while (n%i!=0)
    {
        i++;
    }
    printf("%d X ", i);
    return i*PF(n/i);
}