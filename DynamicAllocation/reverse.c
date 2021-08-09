//Reverse the array element
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	
	printf("Enter the Array size: ");
	
	scanf("%d",&n);
	
	int *arr = (int *)calloc(n, sizeof(int));
	
	for(i=0; i<n;i++)
		arr[i] =i+1;
	
	printf("\nArray elements: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	
	
	printf("\nReverse Array elements: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}

	free(arr);
	return 0;
}