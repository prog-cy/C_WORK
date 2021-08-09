// Program to check that  which variable is preferred in block
#include<stdio.h>

int x = 10;
void display();

int main(void)
{
    int x = 20;

    printf("x = %d\n", x);
    display();

    return 0;
}

void display()
{
    printf("x = %d\n", x);
}