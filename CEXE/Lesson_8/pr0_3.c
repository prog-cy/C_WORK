// Program to coonvert a decimal number in roman
#include<stdio.h>
#include<rupesh.h>

void roman(int n)
{
    int i = 1, v = 5, x = 10, l = 50, c = 100, d = 500, m = 1000;

    while(n>0)
    {
        if(n>=m)
        {
            n = n-m;
            printf("m");
        }

        else if(n>=d)
        {
            n = n-d;
            printf("d");
        }

        else if(n>=c)
        {
            n = n-c;
            printf("c");
        }

        else if(n>=l)
        {
            n = n-l;
            printf("l");
        }

        else if(n>=x)
        {
            n = n-x;
            printf("x");
        }

        else if(n>=v)
        {
            n = n-v;
            printf("v");
        }

        else
        {
            n = n-i;
            printf("i");
        }
        
    }
}


int main(void)
{
    int num;

    printf("Enter number range: ");
    num = inputInt();

    printf("\nRoman equivalent of %d is: ", num);

    roman(num);
        
    printf("\n\n");
    return 0;
}