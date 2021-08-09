//write a program to read three integer from the file
#include<stdio.h>

int main()
{
	FILE *fp;
	int a,b,c;
	
	fp=fopen("fexe1.txt","r");
	if(fp==NULL)
		printf("File does not exist\n");
	else{
	fscanf(fp,"%d%d%d",&a, &b, &c);//this line take all the content from the file
	fclose(fp);
	printf("Values in the file is: %d %d %d\n",a,b,c);
	}
	return 0;
}