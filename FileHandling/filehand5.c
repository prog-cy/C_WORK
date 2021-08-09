//Reading and writing using fscanf() and fprintf() in the text file.
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char str[40],ch;
	
	fp=fopen("filehand5.txt","w");
	if(fp==NULL)
		printf("File does not exist\n");
	else
	{
		printf("Writing in the text file\n");
		do
		{
			gets(str);//this line takes input fro mthe keyboard.
			fprintf(fp,"%s",str);// this line prints only one string in the file.
		}while(strlen(str)>0);
		fclose(fp);
	}
	
	printf("Reading from the file\n");
	fp=fopen("filehand5.txt","r");
	
	do{
		ch=fgetc(fp);//this line check every character in the file.
		fscanf(fp,"%s",str);// this line reads only one string from the file
		printf("%c",ch);// this line prints first char of string in the file.
		puts(str);// after first char this line prints rest char.
		
	}while(ch==EOF);
	
	fclose(fp);
	
	return 0;
}