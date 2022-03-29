#include<stdio.h>

//1. Compound Assignment Operator

int main(){

	printf("Compound Assignment Operators\n");

	int num1 = 10, num2 = 20;

	printf("num1 = %d\n", num1);

	num1 += num2;
	printf("num1 = %d\n", num1);

	num1 -= num2;
	printf("num1 = %d\n", num1);

	num1 *= 2;
	printf("num1 = %d\n", num1);

	num1 %= 3;
	printf("num1 = %d\n", num1);


	return 0;
}