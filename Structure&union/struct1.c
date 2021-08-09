#include<stdio.h>

struct num
{
	int a;
	float b;
	
};// semicolon is important keep this always in the mind 

int main()
{
	struct num m1;
	m1.a=20;
	m1.b=30.4;
	printf("The value is: %d\n",m1.a);
	printf("The value is: %f\n",m1.b);
}