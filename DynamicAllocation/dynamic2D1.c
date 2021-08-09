//using single pointer to create a 2-D array
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r = 3, c = 4, i, j, count=0;
	
	int *arr = (int *)malloc(r*c*sizeof(int));
	
	int *arr1;
	
	arr1 = (int *)malloc(r*c*sizeof(int));
	
	
	//storing values in the array
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			*(arr+i*c+j) = ++count;
		}
	}
	
	
	//getting values from the array
	printf("\nValues in the arr:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",*(arr+i*c+j));
		}
		printf("\n");
	}
	
	
	//taking value from the user
	printf("\nEnter the number:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d", (arr1+i*c+j));
	}
	
	
	
	printf("\nValues in the arr1: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",*(arr1+i*c+j));
		}
		printf("\n");
	}
	
	free(arr);
	free(arr1);
	return 0;
}