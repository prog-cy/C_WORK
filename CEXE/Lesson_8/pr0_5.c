// Prime factor using function
#include<stdio.h>
#include<rupesh.h>

void PFact(int );

int main(void)
{
    int n;
    printf("Enter number: ");
    n = inputInt();

    PFact(n);
    printf("\b\b = %d", n); // \b escape sequence is used for Backspace

    printf("\n\n");
    return 0;
}

// Function for prime factorization
void PFact(int a)
{
    int i = 2;
    
    while(a != 1)
    {
        while(a % i != 0)
        {
            i++;
        }
        printf("%d x ", i);
        a = a/i;
    }

    
}