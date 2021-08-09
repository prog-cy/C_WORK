#include<stdio.h>
#define SWAP(a,b)\
			printf("x=%d y=%d\n",b,a);
			
int main()
{
	int x=20,y=10;
	printf("x=%d y=%d\n",x,y);
	SWAP(x,y);
	return 0;
	
}
			
