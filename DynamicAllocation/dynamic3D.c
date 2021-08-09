//creating 3-D array dynamically using array of pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l=2, w=2, h=2, i,j, k, count = 0;
	
	
	int *arr[h][w];
	
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
			arr[i][j] = (int *)malloc(l*sizeof(int));
	}
	
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
			for(k=0;k<l;k++)
				arr[i][j][k] = ++count;
		}
	}
	
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
			for(k=0;k<l;k++)
				printf("%d ", arr[i][j][k]);
			printf("\n");
		}
		printf("\n");
		
	}
	
	return 0;
}