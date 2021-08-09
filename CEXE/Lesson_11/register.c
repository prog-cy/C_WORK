// program for register storage class
/*
        Storage = CPU register
        Default value = garbage value
        Scope = Local to the block in which variable is defined
        Life = It does not exist outside of the block in which it is defined
*/
#include<stdio.h>

int main(void)
{
    register int i = 0;

    for (; i < 5; i++)
    {
        printf("i = %d\n", i);
        
    }

    return 0;
}