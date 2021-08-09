//To print length of the string using own xstrlen() function
#include<stdio.h>
#include<string.h>

int xstrlen(const char *);

int main(void)
{
    char name[20];

    printf("Enter name: ");
    scanf("%[^\n]s", name);

    printf("Name is: %s", name);

    printf("\nLength of string: %d", xstrlen(name));

    printf("\nLength of string: %d", strlen(name));

    return 0;


}

int xstrlen(const char *s)
{
    int length = 0;

    int i = 0;

    while (s[i] != '\0')
    {
        length++; 
        i++;  
    }

    return length;
    
}