//creating an array using macro definition
#include<stdio.h>
#include<stdlib.h>
#define n 5

int main()
{
	int arr[n];
	
	for (int i=0;i<n;i++)
		arr[i] = i+1;
	
	printf("\nArray Elements: ");
	for(int i=0;i<n; i++)
		printf("%d ",arr[i]);
	
	return 0;
}