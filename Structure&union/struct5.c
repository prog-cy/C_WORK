//structure and pointer
#include<stdio.h>

struct shop
{
	int price;
	int quant;
	
};

int main()
{
	struct shop s1, s2, *p1, *p2;
	
	s1.price = 20;
	s1.quant = 18;
	
	s2.price = 50;
	s2.quant = 20;
	
	p1 = &s1;//pointer to store the address of the struct shop s1 variable.
	
	p2 = &s2;//pointer to store the address of the struct shop s2 variable.
	
	printf("%p %p %p %p\n",&s1, p1, &s2,p2);
	
	printf("%d \n",sizeof(s1));
	
	printf("%d %d %d %d\n", s1.price, s1.quant, s2.price, s2.quant);
	
	printf("%d %d %d %d\n", p1->price, p1->quant, p2->price, p2->quant);
	
	return 0;
}