#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	
	int number, guess, nguess=1;
	char ch;
	// this is the code for generating random number
	srand(time(0));// this is for initializing random number
	number=rand()%100+1;// this code generate random number
	
	while(1)
	{
		printf("Enter the number between 1 to 100\n");
		scanf("%d",&guess);
		if(guess<number)
			printf("Lower number\n");
		else if(guess>number)
			printf("Higher number\n");
		else 
		{
			printf("you won the game in %d attempts\n",nguess);
			break;
		}
		nguess++;
	}
	getch();
}