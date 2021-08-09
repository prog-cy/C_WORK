// Program for external storage class
/*
        Storage = Memory
        Default value = zero
        Scope = Global in which program it is defined
        Life = Till the program is running
*/
#include<stdio.h>

int i; // global declaration

void increment();
void decrement();

int main(void)
{
    printf("i = %d\n", i);
    increment();
    increment();
    increment();
    increment();
    decrement();
    decrement();
    decrement();

    extern int b;
    printf("\ni = %d, b = %d\n", i, b);
}

int b = 20; // global definition

void increment()
{
    i++;

    printf("i = %d\n", i);
}

void decrement()
{
    i--;

    printf("i = %d\n", i);
}