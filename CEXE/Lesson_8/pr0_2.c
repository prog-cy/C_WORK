// Program to calculate the power of a raised to b
#include<stdio.h>
#include<rupesh.h>

int power(int num, int index)
{
    int i = 0, pow = 1;
    while (i<index)
    {
        pow*=num;
        i++;
    }

    return pow;
    
}


int main(void)
{
    int a, b;
    int val;

    printf("Enter number: ");
    a = inputInt();

    printf("\nEnter power of number: ");
    b = inputInt();

    val = power(a, b);

    printf("\n%d raised power %d is %d\n", a, b, val);

    return 0;
}