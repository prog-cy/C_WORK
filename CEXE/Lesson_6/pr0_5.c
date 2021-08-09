// program to calculate level of intelligence
#include<stdio.h>

int main(void)
{
    int y;
    float i, x;

    printf("Approximate level of intelligence of a person\n\n");
    for(y = 1; y<=6; y++)
    {
        for(x = 5.5; x<= 12.5; x+=0.5)
        {
            i = 2+(y+0.5*x);
            printf("for y = %d and x = %0.1f value of i is %0.1f\n", y, x, i);
        }
    }

    printf("\n\n");

    return 0;
}