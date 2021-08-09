/* Program to check that if a letter is input through the keyboard then it is cpital, small, digits, special symbol*/
#include <stdio.h>
#include <rupesh.h>

int main(void)
{
    char ch;
    printf("Enter character: ");
    ch = inputChar();

    if (ch >= 65 && ch <= 90)
        printf("%c is capital letter\n", ch);
    else if (ch >= 97 && ch <= 122)
        printf("%c is small case letter\n", ch);
    else if (ch >= 48 && ch <= 57)
        printf("%c is digit\n", ch);
    else
        printf("%c is special symbol\n", ch);

    return 0;
}