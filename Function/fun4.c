//function returing pointer
#include<stdio.h>

int *fun();
int main()
{
	int *ptr;
	
	ptr = fun();
	
	printf("%p\n", ptr);
	
}

int *fun()
{
	int x =5;
	int *p = &x;
	
	return p;
}