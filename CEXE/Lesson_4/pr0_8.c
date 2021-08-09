// 1. Program to determine lower case letter or not using conditional operators 
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    char ch;
    printf("Enter character: ");
    ch = inputChar();

    (ch>=97 && ch<=122)?printf("%c is lower case alphabet",ch):printf("%c is not a lower case alphabet", ch);

    return 0;
}