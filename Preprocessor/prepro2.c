#include<stdio.h>
#include<conio.h>
#define AREA(r) (3.14*r*r)// macro with argument

int main()
{
	float a ;
	int r;
	printf("Enter radius: ");
	scanf("%d",&r);
	a=AREA(r);
	
	printf("Area of Circle is:%0.01f\n",a);
	
	getch();
}