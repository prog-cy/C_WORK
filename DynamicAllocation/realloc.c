#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	
	printf("Enter size of Array: ");
	scanf("%d",&n);
	
	int *ptr = (int *)malloc(n*sizeof(int));//this function is used to allocate the memory at run time
	
	for(i=0;i<n;i++)
	{
		ptr[i] = i+2;
	}
	
	printf("\nElements in the Array allocated: ");
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	
	printf("\nEnter size of Array: ");
	scanf("%d",&n);
	
	ptr = realloc(ptr, n*sizeof(int));//this function is used to allocate the memory again at run time
	
	
	for(i=0; i<n;i++)
		ptr[i]=i+2;
	
	printf("\nElements in the Array allocated: ");
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	
	free(ptr);
	
	return 0;
	
}