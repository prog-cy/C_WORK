// Reversing a strings
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char *str[5], *temp;

    char s[10], *p;

    int i, len, j;

    printf("Enter 5 Names\n");

    for(i = 0; i<5; i++)
    {
        gets(s);
        fflush(stdin);

        len = strlen(s);

        p = (char*)malloc(len+1);

        strcpy(p, s);

        str[i] = p;

    }

    printf("\nString\n");
    for(i = 0; i<5; i++)
        printf("%s ", str[i]);
    
    printf("\n");
    j = 4;
    for(i = 0; i<j; i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
        
    }

    printf("\nReverse String\n");
    for(i = 0; i<5; i++)
        printf("%s ", str[i]);

    return 0;
}