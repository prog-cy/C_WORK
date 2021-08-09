#include<stdio.h>
#include <stdlib.h>

int main() {

	int n,i, a;
    int *ptr, *ptr1;
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));//This function will allocate memory dynamically
	
	ptr1 = (int *)calloc(n, sizeof(int));//This function will allocate memory in contiguous manner dynamically
	
	if(ptr==NULL || ptr1== NULL)
	{
		printf("Memeory can not be allocated");
		exit(0);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		ptr[i] = a;
		ptr1[i] = i+1;
	}
	printf("\nValue stored in First Array: ");
	
	for (i=0 ; i<n;i++)
	{
		printf("%d  ",*ptr);
		ptr++;
	}
	printf("\nValue Stored in Second Array: ");
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",*ptr1);
		ptr1++;
	}
	
	free(ptr);// free function will deallocate the memory which is allocated by malloc and calloc
	free(ptr1);
	
	return 0;
}