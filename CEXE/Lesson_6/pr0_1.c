// program for printing prime numbers between 1 to 300
#include<stdio.h>

int  main(void)
{
	int i, j;
    
    printf("Prime numbers between 1 to 300\n");

	for(i = 1; i<=300; i++)
	{
		for(j=2; j<=i-1; j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(i == j)
			printf("%d ",i);
    }
return 0;
}