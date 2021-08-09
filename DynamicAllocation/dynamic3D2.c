//using single pointer to create dynamic array
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l=2, w=2, h=2, i,j,k,count=0;
	
	int *arr = (int *)malloc(l*w*h*sizeof(int));
	
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
			for(k=0;k<l;k++)
				*(arr+2*i*w+j*l+k) = ++count;
				
		}
	}
	
	
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
			for(k=0;k<l;k++)
				printf("%d ",*(arr+2*i*w+j*l+k));
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
	
}