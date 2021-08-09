// To check that 10-digit ISBN number is valid or not
#include<stdio.h>

int main(void)
{
    char str[11];

    int sum = 0, i = 0, num, k = 10;

    printf("Enter 10-digit ISBM number: ");
    gets(str);

    
    while (i<9)
    {
        num = str[i]-'0';
        sum = sum + (num*k);
        i++;
        k--;
    }

    if(str[9] == 'x' || str[9] == 'X')
        sum = sum + 10;
    else
        sum = sum + (str[9]-'0');

    if(sum % 11 == 0)
        printf("\nValid 10-digit ISBN number: %s\n", str);
    else
        printf("\nInvalid 10-digit ISBN number: %s\n", str);
    
}