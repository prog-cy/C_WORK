//To define own function for copying one string to another
#include<stdio.h>
#include<string.h>

void xstrcpy(char *t, const char *s);

int main(void)
{
    char name[20];

    char target[20];

    char target1[20];

    printf("Enter name: ");
    scanf("%[^\n]s", name);

    printf("Before copy\n");
    printf("Name is: %s", name);

    strcpy(target, name);

    printf("\nAfter copy\n");
    printf("Name is: %s", target);

    xstrcpy(target1, name);

    printf("\nAfter copy using own function\n");
    printf("Name is: %s", target1);

    return 0;


}

void xstrcpy(char *t, const char *s)
{

    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    
    *t = '\0';
}