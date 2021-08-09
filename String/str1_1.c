// To define own function for capitilizing a string xstrcap()
#include <stdio.h>

void xstrcap(char *s);

int main(void)
{
    char name[20];

    printf("Enter your name: ");
    scanf("%[^\n]s", name);

    printf("\nYour name is: %s", name);

    xstrcap(name); //own function to make string first letter in capital

    printf("\nYour name is: %s", name);

    return 0;
}

void xstrcap(char *s)
{
    int i = 0;

    while (i[s] != '\0')
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] = s[0] - 32;
        if (s[i + 1] >= 'A' && s[i + 1] <= 'Z')
            s[i + 1] = s[i + 1] + 32;
        if(s[i] == ' ')
            s[i+1] = s[i+1]-32;
        else
            s[i] = s[i];

        i++;
    }
}