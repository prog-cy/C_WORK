//creating 3-D array using pointer to pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l = 3, w = 2, h = 2,i,j,k, count=0;
	
	int ***arr = (int***)malloc(h*sizeof(int **));
	
	for(i=0;i<h;i++)
	{
		arr[i] = (int **)malloc(w*sizeof(int *));
		for(j=0;j<w;j++)
			arr[i][j] = (int*)malloc(l*sizeof(int));
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
				printf("%d ", *(*(*(arr+i)+j)+k));//arr[i][j][k]=*(*(*(arr+i)+j)+k).
			printf("\n");
		}
		printf("\n");
		
	}
	
	return 0;
}