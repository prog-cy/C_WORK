#include<stdio.h>

int main()
{
	FILE *fp1, *fp2;
	char ch;
	
	fp1=fopen("C:/Users/Rupesh Kumar Dwivedi/Desktop/C_work/callbyreference.c","r");
	fp2=fopen("Copy.c","w");
	
	if(fp1==NULL)
		printf("File does not exist\n");
	
	else
	{
		while(1)
		{
			ch=fgetc(fp1);
			if(ch==EOF)
				break;
			fputc(ch,fp2);
		}
		fclose(fp1);
		fclose(fp2);
	}
	return 0;
}