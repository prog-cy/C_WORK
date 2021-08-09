// program to print multiplication table till user want.
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int num, i;
    char ch;

    do
    {
        printf("Enter number which table you want to print: ");
        num = inputInt();
        printf("\nTable of %d\n\n", num);
        for(i=1; i<=10; i++)
            printf("%d x %d = %d\n", num, i, num*i);
        printf("Enter(y/n): ");
        fflush(stdin);
        ch = inputChar();
        
    } while (ch == 'y' || ch == 'Y');

    return 0;
    
}