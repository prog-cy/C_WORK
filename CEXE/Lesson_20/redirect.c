/* Using a c program to take input from the keyboard and then redirect wherever we want to keep.*/
#include<stdio.h>

int main(void)
{
    char ch;

    while ((ch = fgetc(stdin)) != EOF)
    {
        fputc(ch, stdout);
    }

    return 0;
    
}