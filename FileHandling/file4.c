//In this program we will write  a text in the file using c code
#include<stdio.h>

int main()
{
	FILE *fp;
	int  num=50;
	
	fp=fopen("file4.txt","w");// this line will create a file4.txt in same folder
	
	fprintf(fp,"%d",num);//this line will print the value of num in the file
	fclose(fp);//this line close the file
	return 0;
	
}