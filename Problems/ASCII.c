// Program to print all character with their ASCII values
#include<stdio.h>
#include<rupesh.h>
#include<string.h>

int main(void)
{
	printf("ASCII values of char and their Binary notatio\n");
	for(int i = 0; i<255; i++)
	{
		Bconvert(i, 2);// This is function defined in rupesh.h to convert a decimal number in binary form
		printf("%10s %10c %10s %10d\n","->" ,i,"->", i);
		
	}
	
}