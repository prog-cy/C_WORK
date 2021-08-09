// Program to print hours
#include<stdio.h>

int main(void)
{
    int i, cnt = 0;

    for(i=1; i<=24; i++)
    {
        if(cnt == 0 && i<12)
            printf("%d AM\n", i);
        else if(i==12)
        {
            printf("%d PM ,Noon\n", i);
            cnt = 1;
        }

        else if(cnt == 1 && i<24)
            printf("%d PM\n", i%12);
        else
            printf("12 AM, Midnight\n");
    }

    printf("\n\n");
    return 0;
}