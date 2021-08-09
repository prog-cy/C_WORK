// program to calculate population at the end of every year
#include<stdio.h>

int main(void)
{
    int num = 100000;

    printf("Present population of town is %d\n", num);
    for(int i = 1; i<=10; i++)
    {
        num+=num*0.1;
        printf("Population after %d year is %d\n", i, num);

    }

    return 0;
}