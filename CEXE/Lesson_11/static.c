// Program for static storage class
/*
        Storage = Memory
        Default value = zero
        Scope = Local to the block in which it is defined
        Life = Till the program is running.
*/
#include<stdio.h>

void increment();

int main(void)
{
    increment();
    increment();
    increment();
    increment();

    return 0;    
}

void increment()
{
    auto int i = 1;
    static int j = 1;
    i++;
    j++;

    printf("i = %d j = %d\n", i,j);
}