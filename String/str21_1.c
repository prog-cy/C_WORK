// Program to implement multiple string using array of pointer to string
#include<stdio.h>

int main(void)
{
    char *name[] = {
        "Rupesh",
        "Ram",
        "Arch",
        "Radhika",
        "Rita",
        "Rohan",
        "John"
    };

    printf("name list\n");

    for(int i =0; i<7; i++)
        printf("%s\n", name[i]);
}