//writing content in the file.
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char s[50];
	
	fp=fopen("filehand9.txt","w+");
	if(fp==NULL)
		printf("File does not exist\a");
	
	fprintf(fp,"%-10s","String");
	fputs("\n",fp);
	
	do{
		gets(s);
		fputs(s,fp);
		fputs("\n",fp);	
	}while(strlen(s)>0);
	
	
	fclose(fp);
	
	return 0;	
}