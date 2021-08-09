//using an array of pointers
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r= 2, c = 2, i, j;
	
	int *arr[r];//array of pointer
	
	for(i=0;i<r;i++)
		arr[i] = (int *)malloc(c*sizeof(int));
	
	//storing the value in the array
	printf("Enter the number:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",(*(arr+i)+j));//&arr[i][j]=(*(arr+i)+j).
	}
	
	printf("Values in the array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",*(*(arr+i)+j));//arr[i][j]=*(*(arr+i)+j).
		printf("\n");
	}
	
	//free memory using belo code
	for(i=0;i<r;i++)
		free(arr[i]);
	return 0;
	
}