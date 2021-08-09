#include<stdio.h>

int fact(int);

int main()
{
	unsigned long int n;
	scanf("%d",&n);
	printf("The factorail of %d is %ul",n, fact(n));
	
}

int fact(int x)
{
	if(x==1 || x==0)
		return 1;
	else
		return fact(x-1)*x;
}