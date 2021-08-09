// 2. Program to determine that a character is special or not
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    char ch;
    printf("Enter character: ");
    ch = inputChar();

    (ch>=0 && ch<=47)?printf("%c is special", ch):((ch>=58 && ch<=64)?printf("%c is special",ch):((ch>=91 && ch<=96)?printf("%c is special", ch):((ch>=123 && ch<=127)?printf("%c is special",ch):printf("%c is not special",ch))));

    return 0;
}