// Program for leap year checking using logical and , logical or operator
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int year;
    printf("Enter year: ");
    year = inputInt();

    if((year%400 == 0) || (year%4 == 0 && year%100!=0))
        printf("%d is leap year\n", year);
    else
        printf("%d is not leap year\n", year);
    
    return 0;
    
}