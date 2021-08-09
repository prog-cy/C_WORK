#include<stdio.h>

int main(void)
{
    char name[20];

    printf("Enter name: ");
    gets(name);

    printf("\nYour name is: ");
    puts(name);

    puts(name);
    puts("How are you");

    return 0;
}