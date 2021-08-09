#include<stdio.h>
#include<conio.h>

#define SUM(a,b) a+b// macro definition with arguments

int sum_fun(int, int);//function prototype

int main()
{
	int n1,n2;
	printf("Enter the number\n");
	scanf("%d%d",&n1,&n2);
	
	printf("Sum of %d and %d is:%d\n",n1,n2,sum_fun(n1,n2));//function call
	getch();
	
}

//function definition
int sum_fun(int x,int y)
{
	int s;
	s=SUM(x,y);
	return s;
	
}