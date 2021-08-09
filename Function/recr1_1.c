// Write a program to calculate sum of first n natural number using recursive function
#include<stdio.h>

int add_first_numbers(int n)
{
	int sum = 0;
	if (n == 0)
		return 0;
	else
	{
		sum = (n+add_first_numbers(n-1));
		return sum;
	}
	
} 

int main(void)
{
	unsigned int n;
	printf(" Enter number up -to you want to calculate sum: ");
	scanf("%d", &n);
	int res = add_first_numbers(n);
	printf("Sum of first %d integers is %d\n", n, res);
}