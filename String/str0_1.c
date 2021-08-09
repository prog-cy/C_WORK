// Defining a string in the c language
// A string is an array of characters which ends with '\0' null character

#include<stdio.h>

int main(void)
{
    char str[] = {'r', 'u', 'p', 'e', 's','h', '\0'};

    printf("String is\n");
    
    // This is the one way to print string or array of characters
    for(int i= 0; i<7; i++)
        printf("%c", str[i]);

    //This is the second way to print string 
    printf("\n");
    for(int i= 0; i<7; i++)
        printf("%c", *(str+i));
    
    printf("\n");
    //This is thrid way to print a string
    for(int i= 0; i<7; i++)
        printf("%c", i[str]);
    
    return 0;

}