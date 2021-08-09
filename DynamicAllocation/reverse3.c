//reverse the array using function and creating dynamic array
#include<stdio.h>
#include<stdlib.h>

void show(int *,int );
void reverse(int *, int );

int main()
{
	int n,i;
	
	printf("Enter the size of the  array: ");
	scanf("%d",&n);
	int *arr = (int *)malloc(n*sizeof(int));
	
	for(i=0; i<n ;i++)
		arr[i] = i+1;

	printf("\nArray Elements: ");
	show(arr, n);//calling show function
	
	reverse(arr,n);//calling reverse function
	
	printf("\nReversed Array: ");
	show(arr, n);//calling show function
	
	free(arr);
	return 0;
	
}

//this function is defined for showing element of the array
void show(int *a,int n)
{
	
	int i;
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
	
}

//this function is defined for reverse the array element
void reverse(int *a, int n)
{
	int *f,*l,t;
	
	f = a;//pointer f contains first address of array a.
	l = &a[n-1];//pointer l contains  last address of array a.
	
	//this is the logic to swap value  on the address.
	while(f<l)
	{
		t = *l;
		*l = *f;
		*f = t;
		f++; l--;
	}
}