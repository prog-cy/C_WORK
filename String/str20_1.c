// Program to implement the multiple string
#include<stdio.h>

int main(void)
{
    char names[7][20] = {
        "Rupesh",
        "Ram",
        "Arch",
        "Radhika",
        "Rita",
        "Rohan",
        "John"
    };

    printf("Name in the list\n");
    for(int i = 0; i<7; i++)
    {
        printf("%s\n", &names[i][0]);
    }

    printf("\n");
    return 0;
}