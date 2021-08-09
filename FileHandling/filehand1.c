#include<stdio.h>

int main()
{
	FILE *fp1, *fp2; //FILE is a structure 
	char ch;
	
	int noc=0,nos=0,non=0,noa=0;
	
	fp1=fopen("new1.txt","r");
	fp2=fopen("new2.txt","w");
	if(fp1==NULL)
		printf("File does not exist\n");
	
	else
	{
		while(1)
		{
			ch=fgetc(fp1);// fgetc() function used for reading character one by one
			if(ch==EOF)//EOF is a macro which mean end of  file.
				break;
			
			fputc(ch, fp2);// fputc() function used for printing character one by one in the file
			if(ch==' ')
				nos++;
			else if(ch=='\n')
				non++;
			else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
				noa++;
			else
				noc++;	
		}

		
		printf("No. of characters: %d\n",noc);
		printf("No. of space: %d\n",nos);
		printf("No. of new line: %d\n",non);
		printf("No. of alphbets: %d\n",noa);
		fclose(fp1);
		fclose(fp2);
	
	}
	return 0;
}