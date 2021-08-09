#include<stdio.h>

int print_numbers(int n)
{
	if (n == 0)
		return 0;
	else
	{
		
		return n+print_numbers(n-1);
	}
	
} 

int main(void)
{
	unsigned int n;
	printf(" Enter number up -to you want to calculate sum: ");
	scanf("%d", &n);
	int res = print_numbers(n);
	printf("%d\n ", res);
}