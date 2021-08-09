// Second approach of problem 11
#include<stdio.h>

int main(void)
{
    int i;

    for(i=0; i<2; i++)
    {
        if(i == 0)
        {
            printf("12 AM, Midnight\n");
            for(int j = 1; j<12; j++)
                printf("%d AM\n", j);
        }

        else if(i==1)
        {
            printf("12 PM, Noon\n");
            for(int j = 1; j<12; j++)
                printf("%d PM\n", j);
        }
    }

    printf("12 AM, Midnight\n\n\n");
    return 0;
}