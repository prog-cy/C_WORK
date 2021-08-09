// Printing a given Pattern
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int n, j, num = 1;
    //printf("Enter number: ");
    //n = inputInt();

    printf("\n");
    for(int i = 4; i>=1; i--)
    {
        for(j = 1; j<=i-1; j++)
            printf("    ");
        for(int k = 4; k>=j; k--)
        {
            printf("%d   ", num);
            printf("    ");
            num = num+1;
        }

        printf("\n");

    }

    printf("\n");

    return 0;
}