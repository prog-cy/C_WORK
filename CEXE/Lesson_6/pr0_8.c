// program to print all triplets with side lenght n
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int i, j, k, n;
    printf("Enter range of sides: ");
    n = inputInt();

    printf("\nAll pythagorean Triplets less than or equal to side lenght %d\n",n);
    for(i =1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
        {
            for(k = 1; k<=n; k++)
            {
                if(j*j+k*k == i*i && j>k)
                    printf("%d %d %d \n", k, j, i);
            }
                
        }
    }

    return 0;
}