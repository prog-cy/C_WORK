// Program to print all Ramanujan Number till a reasonable limit
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int n,a, b, c,d, a3, b3, c3,d3;
    printf("Enter range: ");
    n = inputInt();

    printf("Ramanujan Number up-to %d\n", n);
    for(a = 1; a<=n; a++)
    {
        a3 = a*a*a;
        if(a3>n)
            break;
        for(b = a; b<=n; b++)
        {
            b3 = b*b*b;
            if(a3+b3>n)
                break;
            for(c = a+1; c<=n; c++)
            {
                c3 = c*c*c;
                if(c3>a3+b3)
                    break;
                for(d = c; d<=n; d++)
                {
                    d3 = d*d*d;
                    if(c3+d3>a3+b3)
                        break;
                    else if(c3+d3 == a3+b3)
                        printf("%d = %d^3+%d^3 = %d^3+%d^3\n", a3+b3, a, b, c,d);
                }
            }
        }
    }

    printf("\n\n");
    return 0;

}