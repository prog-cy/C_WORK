#include<stdio.h>

int main(void)
{
    char name[] = "Rupesh";

    char *ptr;

    int i= 0;

    ptr = name;

    printf("Name is ");

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\nName is ");

    while (name[i] != '\0')
    {
        printf("%c", i[name]);
        i++;
    }

    printf("\nName is ");
    i = 0;

    while (*(name+i) != '\0')
    {
        printf("%c", *(name+i));
        i++;
    }
    
    
    
    

}