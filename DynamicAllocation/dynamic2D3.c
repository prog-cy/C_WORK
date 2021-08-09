//using pointer to pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r = 2, c = 2, i, j ,count =0;
	
	int **arr = (int **)malloc(r*sizeof(int *));
	
	for(i=0;i<r;i++)
		arr[i]= (int*)malloc(c*sizeof(int));
	
	//storing values in the array
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			*(*(arr+i)+j) = ++count;
	}
	
	printf("Values in the array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	for(i=0;i<r;i++)
		free(arr[i]);
	
	return 0;
}