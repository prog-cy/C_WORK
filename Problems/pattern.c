#include <stdio.h>

int main()
{
    int n, j, n1, num = 1;

    scanf("%d", &n);

    n1 = n;

    // for upper reverse triangle
    for (int i = n; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("   ");
        }
        for (int k = n1; k >= j; k--)
        {
            printf("*");
            printf("  ");
        }
        printf("\n");
    }

    // for down triangle
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = n1; k > i; k--)
        {
            printf("   ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
            printf("  ");
        }

        printf("\n");
    }

    return 0;
}
