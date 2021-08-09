#include<stdio.h>
#define ADD(a,b)a+b //this is macro expansion

int sum;// it global variable with external storage class

int main()
{
	auto int x=30, y=60; //it is local variable with automatic storage class
	auto float a1=40.0, b1=60.0;
	
	unsigned char c1='A', c2='B';
	unsigned int sum2=ADD(c1,c2);
	register float sum1=ADD(a1,b1);//it is register storage class
	sum=ADD(x,y);
	printf("The sum of two numbers using macro=%d\n",sum);
	printf("The sum of two real numbers using macro=%0.02f\n",sum1);
	printf("The sum of two numbers using macro=%d\n",sum2);
	return 0;
	
}