//if file does not exist
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("file5.txt","r");
	if(fp==NULL)
		printf("File does not exist\n");
	else
		printf("File exist\n");
}