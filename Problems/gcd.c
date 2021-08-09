#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, r;
    scanf("%d%d", &a, &b);

    while (1)
    {
        if (b > 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        else
        {
            break;
        }

        if (r == 0)
            break;
    }
    printf("GCD is %d", a);
    return 0;
}