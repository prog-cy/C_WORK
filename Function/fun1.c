#include<stdio.h>

void display();// function prototype

int main()
{
	printf("It runs before function call\n");
	display();
	printf("It runs after function call\n");
}

void display()
{
	printf("I am user defined function\n");
}