// Program to check a year is leap year or not using conditional operator
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int year;
    printf("Enter year: ");
    year = inputInt();

    ((year%400 == 0) || (year%4 ==0 && year%100!=0))?printf("%d is leap year",year):printf("%d is not a leap year", year);

    return 0;
}