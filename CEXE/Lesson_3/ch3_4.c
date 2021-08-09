#include <stdio.h>
#include <conio.h>

int main()
{
	int year, basic_year = 1900, leap_year, remaining_year, total_days, total_year, day;

	printf("Enter the year after 1900\n");
	scanf("%d", &year);

	total_year = year - basic_year;

	leap_year = total_year / 4;

	remaining_year = total_year - leap_year;

	total_days = (remaining_year * 365) + (leap_year * 366) ;

	day = total_days % 7;

	if (day == 1)
		printf("Monday");
	else if (day == 2)
		printf("Tuesday");
	else if (day == 3)
		printf("Wednesday");
	else if (day == 4)
		printf("Thursday");
	else if (day == 5)
		printf("Friday");
	else if (day == 6)
		printf("Saturday");
	else if (day == 7)
		printf("Sunday");
	else
		printf("Wrong entry");

	getch();
}