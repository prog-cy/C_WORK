#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int ch, n;

    int flag = 1;
    while(flag)
    {
        printf("1: Factorial of a number\n");
        printf("2: Prime or not\n");
        printf("3: Odd or even\n");
        printf("4: Exit\n");

        printf("Enter your choice: ");
        ch = inputInt();

        switch(ch)
        {
            case 1:
                printf("Enter number: ");
                n = inputInt();
                long int fact = 1;
                for(int i = 1; i<=n; i++)
                {
                    fact*=i;
                }

                printf("Factorial of %d is %ld\n", n, fact);
                break;
            case 2:
                printf("Enter number: ");
                n = inputInt();
                int i = 2;
                for(;i<=n-1; i++)
                {
                    if(n%i == 0)
                    {
                        printf("%d is not prime\n", n);
                        break;
                    }
                }

                if(n == i)
                    printf("%d is prime\n", n);
                break;
            case 3:
                printf("Enter number: ");
                n = inputInt();

                if(n%2 == 0)
                    printf("%d is even\n", n);
                else
                {
                    printf("%d is odd\n", n);
                }
                
                break;
            case 4:
                flag = 0;
                break;
            default:
                printf("Invalid choice\n");
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}