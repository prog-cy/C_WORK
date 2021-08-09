// To define own function to change string in lower case xstrlwr()
#include<stdio.h>
#include<string.h>

void xstrlwr(char *s);

int main(void)
{
    char name1[20], name2[20];

    printf("Enter first name: ");
    scanf("%[^\n]s", name1);

    fflush(stdin);
    printf("\nEnter second name: ");
    scanf("%[^\n]s", name2);

    printf("\nName is %s", name1);

    strlwr(name1); //Using built-in function
    printf("\nName is:  %s", name1);

    printf("\nName is: %s", name2);

    xstrlwr(name2);// using own defined function

    printf("\nName is: %s", name2);

    return 0;
}


void xstrlwr(char *s)
{
    int i = 0;

    while (i[s] != '\0')
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i]+32;
        else
            s[i] = s[i];
        i++;
    }
    
}