#include<stdio.h>
#include<rupesh.h>

int GCD(int a, int b);

int main()
{
    int n1, n2;
    printf("Enter two integers: ");
    n1 = inputInt(), n2 = inputInt();

    int res = GCD(n1, n2);

    printf("gcd of %d and %d is %d\n", n1, n2, res);

    return 0;
}

int GCD(int a, int b)
{
    int r;

    if (a > b)
    {
        while (b > 0)
        {
            r = a % b;
            a = b;
            b = r;
        }

        return a;
    }
    else
    {
        while (a > 0)
        {
            r = b % a;
            b = a;
            a = r;
        }
        return b;
    }
}
