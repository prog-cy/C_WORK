//creating a text file and then write in the file using keyboard
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char s[40],ch;
	
	fp=fopen("filehand6.txt","w");
	
	if(fp==NULL)
		printf("File does not exist\n");
	
	printf("Write in the file\n");
	do{
		gets(s);
		fputs(s,fp);
		fputs("\n",fp);
	}while(strlen(s)>0);
	
	fclose(fp);
	
	printf("Read from the file\n");
	fp=fopen("filehand6.txt","r");
	
	while(fgets(s,39,fp)!=NULL)
		printf("%s",s);
	
	
	fclose(fp);
	
	return 0;
	
	
}