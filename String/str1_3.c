// cancatinating two string using buitl-in function
#include<stdio.h>
#include<string.h>

int main(void)
{
    char source[10];

    char target[20];

    printf("Enter source: ");
    scanf("%[^\n]s", source);

    fflush(stdin);
    printf("\nEnter target: ");
    gets(target);

    printf("\nSource string: %s", source);

    printf("\nTarget string: %s", target);
    strcat(target, source); // Using built-in function to cincatenate a string

    printf("\nTarget string after concatination: %s", target);


    
}