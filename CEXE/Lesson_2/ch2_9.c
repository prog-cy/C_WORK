#include<stdio.h>

int main()
{
	int rupees;
	int nuhun, nufifty, nuten, nufive, nutwo, nuone, total;
	
	printf("Enter Rs.\n");
	scanf("%d",&rupees);
	
	nuhun = rupees/100;
	rupees = rupees%100;
	nufifty = rupees/50;
	rupees = rupees%50;
	nuten = rupees/10;
	rupees = rupees%10;
	nufive = rupees/5;
	rupees = rupees%5;
	nutwo = rupees/2;
	rupees = rupees%2;
	nuone = rupees/1;
	rupees = rupees%1;
	
	total = nuhun + nufifty + nuten + nufive + nutwo + nuone;
	printf("Total number of denominations is: %d\n", total);

	return 0;
	
	
	
	return 0;
	
	
}