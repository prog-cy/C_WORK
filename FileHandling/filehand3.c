//receiving string from keyboard and writing them into file.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	
	char str[80];
	
	
	
	fp=fopen("filehand3.txt","w");
	
	if(fp==NULL)
		printf("File does not exist\n");
	
	else
	{
		printf("Enter lines in the file\n");
		while(strlen(gets(str))>0)
		{
			fputs(str,fp);
			fputs("\n",fp);
		}
		
		fclose(fp);
		
	}
	
	printf("Reading from the file\n");
	
	fp=fopen("filehand3.txt","r");
	while(fgets(str,79,fp)!=NULL)
		printf("%s",str);
	fclose(fp);
	
	return 0;
}