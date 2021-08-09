#include<stdio.h>
#include<conio.h>

#define PI 3.14// this line deinfe PI macro.


int main()
{
	printf("%0.02f\n",PI*4*4);
	getch();
}

#undef PI// this line remove the definition of macro PI.