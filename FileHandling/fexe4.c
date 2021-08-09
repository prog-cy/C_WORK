/*write a program to read content from the file character by character and then print
entire line character by character in the other file two time.*/

#include<stdio.h>

int main()
{
	FILE *fp1;
	FILE *fp2;
	
	char c;
	
	fp1=fopen("fexe4.txt","r");
	fp2=fopen("fexe5.txt","w");
	
	if(fp1==NULL)
		printf("File does not exist\n");
	else
	{
		c=fgetc(fp1);  
		while(c!=EOF)
		{
			fputc(c,fp2);
			c=fgetc(fp1);
		}
		while(c!=EOF)
		{
			fputc(c,fp2);
			c=fgetc(fp1);
		}
			
		
	}
	
	
	fclose(fp1);
	fclose(fp2);
	return 0;
	
}