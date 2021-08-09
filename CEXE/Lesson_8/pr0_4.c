// Program to check year is leap or not
#include<stdio.h>
#include<rupesh.h>

int leap_year(int year)
{
    if((year%400 == 0) || (year%4 == 0 && year%100 !=0))
        return 1;
    else
    {
        return 0;
    }
    
}


int main(void)
{
    int year;

    printf("Enter year: ");
    year = inputInt();

    int flag = leap_year(year);

    if(flag == 1)
        printf("%d is leap year\n", year);
    else
    {
        printf("%d is not leap year\n", year);
    }

    printf("\n\n");

    return 0;
    
}