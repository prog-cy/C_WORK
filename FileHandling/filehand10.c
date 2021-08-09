//using fseek() function and SEEK_CUR to modify existing record.
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char s[50],ch;
	
	fp=fopen("filehand9.txt","r+");
	rewind(fp);
	
	while(1)
	{
		gets(s);
		fseek(fp,"\n",SEEK_CUR);
		fputs(s,fp);
		fputs("\n",fp);
		if(strlen(s)==0)
			break;
	}
	fclose(fp);
	
	fp=fopen("filehand9.txt","r");
	
	while(1)
	{
		ch=fgetc(fp);
		printf("%c",ch);
		if(ch==EOF)
			break;
		
	}
	
	return 0;
	fclose(fp);
}