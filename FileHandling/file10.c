// reading entire file using below code

#include<stdio.h>

int main()
{
	FILE *fp;
	
	char c;
	
	fp=fopen("file6.txt","r");
	if(fp==NULL)
		printf("File does not exist\n");
	
	else
	{
		c=fgetc(fp);
		while(c!=EOF)// -->EOF means end of file content is used to terminate the loop
		{
			printf("%c",c);
			c=fgetc(fp);
		}
		fclose(fp);
	}
	return 0;
}