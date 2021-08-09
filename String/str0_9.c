//To define own xstrupr() function to make string in upper case
#include <stdio.h>
#include <string.h>

void xstrupr(char *s);

int main(void)
{
    char name[20];
    char name1[20];

    printf("Enter name 1: ");
    scanf("%[^\n]s", name);

    fflush(stdin);
    printf("\nEnter name 2: ");
    scanf("%[^\n]s", name1);

    printf("\nName is %s", name);

    strupr(name);// Built- in function to convert a string in upper case

    printf("\nName is %s", name);

    printf("\nName is: %s", name1);

    xstrupr(name1); // My own function to convert a string in upper case

    printf("\nName is: %s", name1);

    return 0;

}

void xstrupr(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if(s[i]>='a' && s[i]<='z')
            s[i] = s[i]-32;
        else
            s[i] = s[i];
        
        i++;
    }
    

}