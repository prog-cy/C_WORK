#include<stdio.h>
#include<rupesh.h>

void Bequi(int n);
void B_convert(int n);

int main(void)
{
    int n;
    printf("Enter number that you want to convert in binary: ");
    n = inputInt();

    Bequi(n);

    printf("Binary equivalent of %d using recursive approach\n", n);
    B_convert(n);

    return 0;
}

//Using non recursive approach
void Bequi(int n)
{
    int s = 0, r, v = 1;
    int n1 = n;
    while (n>0)
    {
        r = n%2;
        s = s+r*v;
        v = v*10;
        n = n/2;
    }

    printf("Binary euivalent of %d is\n", n1);
    printf("%d\n", s);
    
}

//Using recursive approach
void B_convert(int n)
{
    if(n == 0)
        return ;
    B_convert(n/2);
    printf("%d", n%2);
}