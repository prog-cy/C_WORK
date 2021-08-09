#include<stdio.h>

int main(void)
{
    char name[10];

    printf("Enter name: ");
    scanf("%[^\n]s", name); //using this format specifier we can take multiword string by scanf() function 

    printf("\nYour name is: ");
    printf("%s", name);

    return 0;
}