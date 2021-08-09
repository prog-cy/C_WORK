// Program to generate a fibonacci string
#include<stdio.h>
#include<string.h>

int main(void)
{
    char *f1 = "a", f2[100] = "b";

    char f3[100];

    register int i; // We have defined register int because we have to use in for loop.

    register int j;

    int len, n;

    printf("Enter number up-to which you want to print fibonacci string: ");
    scanf("%d", &n);

    printf("%s\n%s\n", f1, f2); // String1 and string2 is printed here.

    for(i = 0; i<n-2; i++)
    {
        strcat(f2, f1); //concatenates the string f2+f1 and puts in f2

        printf("%s\n", f2); // Printing the string.

        len = (strlen(f2) - strlen(f1)); // To find length of previous string.

        for (j = 0; j < len; j++) // This is for slicing the string.
            f3[j] = f2[j];
        f3[j] = '\0'; // At the end of string put '\0' null character.

        f1 = f3; //In this line we are assigning previous f2 string in f1 string.

    }
    
}