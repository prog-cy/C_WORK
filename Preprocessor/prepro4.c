#include<stdio.h>
#include<conio.h>

//multiple line in macro definition
#define NUM(a,b) if(a>b)\
				printf("%d is greater\n",a);\
				else\
				printf("%d is greater\n",b);

int main()
{
	int x, y;
		
	scanf("%d%d",&x,&y);
	NUM(x,y);
	getch();
}