//write a program to calculate sum of square of first n natural number
#include<stdio.h>

int sum(int n)
{
	if(n == 0)
		return 0;
	else
	{
		int s = 0;
		s = n*n + sum(n-1);
		return s;
	}
}

int main(void)
{
	unsigned int n1;
	printf("Enter tha value: ");
	scanf("%d", &n1);
	int res = sum(n1);
	printf("Sum of square of first %d natural number is: %d", n1, res);
}