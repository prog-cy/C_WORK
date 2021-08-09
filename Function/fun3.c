#include<stdio.h>

int sum(int a, int b);// prototype

int main()
{
	int c;
	c=sum(5,6);// function call
	printf("The value of c is %d\n",c);
	return 0;
}

// function definition
int sum(int a, int b)
{
	int result=a+b;
	return result;
}