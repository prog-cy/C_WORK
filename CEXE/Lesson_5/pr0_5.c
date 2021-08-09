// Program to check that given number is armstrong number or not between 1 to 500
#include<stdio.h>

int main(void)
{
    int num, sum = 0,  rem, i=1;

    printf("Armstrog number between 1 to 500\n");
    while (i<=500)
    {
        num = i;
        while (num > 0)
        {
            rem = num % 10;
            sum += (rem * rem * rem);
            num = num / 10;
        }

        if (i == sum)
            printf("%d ", i);
        i++;
        sum = 0;
    }
    

    return 0;
    


}