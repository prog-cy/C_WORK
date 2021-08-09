#include<stdio.h>
#include<math.h>

int main()
{
    int i,j=1,n,n1,count=0;

    printf("--enter number---\n");
    scanf("%d",&n1);
    printf("===================================\n");
    printf("Prime number between 1 to %d\n", n1);
    while(j<=n1)
    {
        n=j;
        i=2;
        while(i<=n)
        {
            if(n%i==0)
            {
                //printf("%d is not a prime number\n",n);
                break;
            }
            i++;
            
        }
        if (n==i)
        {
             printf("%d ",n);
             count++;
        }
        j++;
    }
    printf("\n===================================");
    printf("\nTotal number of prime number between 1 to %d is %d",n1,count);
    printf("\n====================================================");
    printf("\n\n");
    return 0;
}