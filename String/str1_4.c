// Defining own concatenation function name xstrcat()
#include<stdio.h>
#include<string.h>

void xstrcat(char *t, const char *s);

int main()
{
    char first_name[50], last_name[20];

    char *full_name;

    printf("Enter first name: ");
    scanf("%[^\n]s", first_name);

    fflush(stdin);
    printf("Enter last name: ");
    scanf("%[^\n]s", last_name);

    printf("\nFirst name: %s", first_name);

    printf("\nLast name: %s", last_name);

    xstrcat(first_name, last_name);// Function call for concatenation

    full_name = first_name;

    printf("\nFull Name: %s", full_name);
}

void xstrcat(char *t, const char *s)
{
    int i = strlen(t);

    t[i] = ' ';

    while (*s != '\0')
    {
        t[i+1] = *s;
        s++;
        i++;
    }  
    t[i+1] = '\0';
}