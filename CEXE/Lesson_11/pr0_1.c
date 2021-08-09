#include<stdio.h>

int i;

void val();

int main(void)
{
    printf("i = %d\n", i);
    i++;

    val();
    printf("i = %d\n", i);

    val();

    return 0;
}

void val()
{
    i = 100;
    printf("i = %d\n", i);
    i++;
}