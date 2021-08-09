#include<stdio.h>

int main()
{
	float c_p, s_p;
	
	printf("Enter cost price of an item:\n");
	scanf("%f",&c_p);
	
	printf("Enter selling price of an item:\n");
	scanf("%f",&s_p);
	
	if(c_p>s_p)
		printf("Seller incurred loss of %0.02fRs.\n",c_p-s_p);
	else
		printf("Seller made profit of %0.02fRs.\n", s_p-c_p);
	
	return 0;
	
	
	
}