#include<stdio.h>

#define PI 3.14 //this is macro definition

int main()
{
	float a;
	int r;
	printf("Enter the radius\n");
	scanf("%d",&r);
	
	a=PI*r*r;
	
	printf("Area of the circle is: %0.02f\n",a);
	
	return 0;
}