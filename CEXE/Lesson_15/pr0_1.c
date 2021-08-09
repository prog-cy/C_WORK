#include <stdio.h>

int main(void)
{
    char str[10];

    printf("Enter string: ");

    gets(str); // more appropriate for reading multi-word string

    printf("You have entered: %s", str);

    return 0;
}