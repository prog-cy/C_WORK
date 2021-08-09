#include<stdio.h>
#include<rupesh.h>

int digit_sum(int n);
int d_sum(int n);

int main(void)
{
    int num;
    printf("Enter 5 digit number: ");
    num = inputInt();

    int res = digit_sum(num);
    printf("Sum of digits of a number using non recursive approach= %d\n", res);

    int res1 = d_sum(num);
    printf("Sum of digits of a number using recursive approach= %d\n", res1);

    return 0;
}

//Function to calculate sum of digits using non recursive approach
int digit_sum(int n)
{
    int s = 0;
    while(n>0)
    {
        s = s+n%10;
        n = n/10;
    }

    return s;
}

//Function to calculate the sum of digits using recursive approach
int d_sum(int n)
{
    if(n == 0)
        return 0;
    return (n%10+d_sum(n/10));
}