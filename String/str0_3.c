#include<stdio.h>

int main(void)
{
    char name[] = "Rupesh";

    char name1[20];

    int i = 0;

    //New method to print a string

    printf("Your name: ");
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }

    printf("\n\nEnter your name: ");
    scanf("%s", name1);

    printf("Your name is %s\n", name1);

    return 0;

}