// Program for string comparision
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10], name1[10];

    printf("Enter name: ");
    scanf("%[^\n]s", name);

    fflush(stdin);
    printf("Enter name: ");
    scanf("%[^\n]s", name1);

    //Comapring a string using strcmp() function
    printf("%d", strcmp(name, name1));
    printf(" %d", strcmp(name, "Jerry boy"));
}