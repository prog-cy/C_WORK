#include<stdio.h>

int main()
{
	int year;
	
	printf("Enter a year\n");
	scanf("%d",&year);
	
	//logic for leap year
	if(year%400==0)
		printf("%d is leap year\n",year);
	else if(year%100==0)
		printf("%d is normal normal year\n",year);
	else if(year%4==0)
		printf("%d is leap year\n",year);
	else
		printf("%d is normal year\n",year);
	
	return 0;
	
	
}