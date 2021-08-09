#include<stdio.h>

int main(void)
{
    char name[] = "Rupesh";

    char name1[10];

    //Taking a string character-wise 
    for(int i = 0; i<11; i++)
    {
        scanf("%c", (name1 + i));
        fflush(stdin); // This is used to take buffer values because new line is also 
        // a character so before taking new character we have to flush the input
    }

    //This is the new way to print a string
    printf("Name is %s\n", name);
    
    printf("Name is ");
    for(int i = 0; i<11; i++)
        printf("%c", name1[i]);


    
}