//Creating a string using pointer
#include<stdio.h>

int main(void)
{
    char name[] = "Rupesh";

    char *ptr = "rupesh"; 
    // Here we are storing the address of string at some location in memory

    char *ptr1;

    char name1[10];

    //name1 = name; This line will give an error

    ptr1= ptr;  // This line will work

    printf("Name is: %s\n", name);

    printf("Name is: %s", ptr);

    printf("\nName is: %s", ptr1);

    return 0;
}