// in this program we are calling a function using user defined function
#include<stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
	GoodMorning();
	return 0;
}

void GoodMorning()
{
	printf("Good Morning Rupesh\n");
	GoodAfternoon();
}

void GoodAfternoon()
{
	printf("Good Afternoon Rupesh\n");
	GoodNight();
}
void GoodNight()
{
	printf("Good Night Rupesh\n");
}