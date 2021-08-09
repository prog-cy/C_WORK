// This program converts a string to integer 
#include<stdio.h>

int main(void)
{
    char str[10];
    int i = 0, num, number = 0;

    printf("Enter numerical string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        num = str[i]-'0';
        number = number*10 + num;
        i++;    
    }

    printf("Integer value is: %d\n\n", number);

    return 0;

     
}