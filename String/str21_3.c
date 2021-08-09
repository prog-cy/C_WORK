// Program to take input by the user and put that string in an array of pointer to string

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char *names[7];

    char str[50];

    char *p;

    int len;

    printf("Enter 7 string\n");

    for(int i = 0; i<7; i++)
    {
        scanf("%s", str);

        len = strlen(str);

        p = (char *)malloc(len+1); // len+1 in this 1 is added to store '\0'.

        strcpy(p, str);

        names[i] = p;
    }

    printf("\nname in list\n");
    for(int i = 0; i<7; i++)
        printf("%s\n", names[i]);

    return 0;
}