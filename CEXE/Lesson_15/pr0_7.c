// Program to check that credit card number is valid or not

#include<stdio.h>

int main(void)
{
    char ccnum[16];

    int n, n1, sev = 0, sod = 0, j = 0, k = 1;

    printf("Enter 16-digit credit card number: ");
    scanf("%s", ccnum);

    printf("\n");

    while (j<15)
    {
        n = ccnum[j] - '0';

        n = n*2;

        if(n>=10)
            n = n-9;

        sev = sev+n;

        n1 = ccnum[k]-'0';

        sod = sod+n1;

        j+=2;
        k+=2;
    }

    if((sev+sod)%10 == 0)
        printf("Your credit card number is valid\n");
    else
        printf("Your credit card number is invalid\n");
    
    printf("\n");

    return 0;
    
     
}