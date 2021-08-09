// Program to print all ASCII values and their equivalent character
#include<stdio.h>

int main(void)
{
    int i = 0;
    printf("ASCII values and their equivalent character\n");
    while (i<=255)
    {
        printf("%c   ->   %d\n", i, i);
        i++;
    }

    return 0;
    
}