// reading entire content of the file 
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	
	fp=fopen("file6.txt","r");
	if(fp==NULL)
		printf("File does not exist\n");
	else
	{
		for (int i=0;i<39;i++)
		{
			printf("%c",fgetc(fp));
		}
		
	}
}