//Reverse array element
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	int *f,*l,t;
	
	printf("Enter the Element: ");
	scanf("%d",&n);
	
	int *arr = (int *)calloc(n, sizeof(int));
	
	for(i =0 ;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("\nArray Elements: ");
	for (i =0 ;i<n ;i++)
		printf("%d ",arr[i]);
	
	f = arr;//pointer f contains address of first element of arr
	l = &arr[n-1];// pointer l contains address of last element of arr
	
	//this is logic to reverse the value of arr 
	while(f<l)
	{
		t = *l;
		*l = *f;
		*f =t;
		f++;l--;
	}
	
	printf("\nReversed Array: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	free(arr);
	return 0;
}