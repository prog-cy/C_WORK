/* Write the program to read a file character by character and print all the character
in another file twice*/

#include<stdio.h>

int main()
{
	FILE *fp1;
	FILE *fp2;
	
	char ch;
	
	fp1=fopen("fexe4.txt","r");
	fp2=fopen("fexe3.txt","w");
	
	if(fp1==NULL)
		printf("File does not exist\n");
	else{
		ch=fgetc(fp1);
		while(ch!=EOF){
			fputc(ch,fp2);
			fputc(ch,fp2);
			ch=fgetc(fp1);
		}
		printf("Done");
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}