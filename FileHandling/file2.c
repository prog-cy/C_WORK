// reading file created in file1.c program and taking input from the file
#include<stdio.h>

int main()
{
	FILE *fp;// this line is file pointer
	
	char str[6];// this is string created by me to store file string
	int a;
	float b;
	
	fp=fopen("file1.txt","r");//this is the way to read file
	
	fscanf(fp, "%s",str);//this is the way to take input from the file
	fscanf(fp,"%d",&a);
	fscanf(fp,"%f",&b);
	
	fclose(fp);// this is used for closing the file
	
	printf("String in the file is: %s\n",str);
	printf("Integer in the file is: %d\n",a);
	printf("Float value in the file is: %0.02f\n",b);
	return 0;
}