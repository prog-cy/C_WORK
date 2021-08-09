//Reverse the array element using address of the element
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n ,i ;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	
	int *arr = (int *)malloc(n*sizeof(int));
	
	for (i=0;i<n;i++)
	{
		arr[i] = i+1;
	}
	
	printf("\nArray Elements: ");
	
	for (i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	
	int *f = arr;
	int *l;
	int t;
	
	for(i=1;i<n;i++)
	{
		if(i==n-1)
			l = arr+i;
	}
	
	while(f<l)
	{
		t = *f;
		*f = *l;
		*l =t;
		f++;
		l--;
	}
	
	printf("\nReversed Array Elements: ");
	for (i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
	free(arr);
	
	return 0;
}