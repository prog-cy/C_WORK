/*In previous two program we have seen that how to create a file and how to take
input from the file. Now we will check first that file exists or not*/

#include<stdio.h>

int main()
{
	FILE *fp;// this line is file pointer
	
	char str[6];// this is string created by me to store file string
	int a;
	float b;
	
	fp=fopen("file1.txt","r");//this is the way to read file
	//the below code will check weather a file exist or not
	if(fp==NULL)
		printf("file does not exist\n");
	
	// and if file exist then do below written task
	else
	{
	
	fscanf(fp, "%s",str);//this is the way to take input from the file
	fscanf(fp,"%d",&a);
	fscanf(fp,"%f",&b);
	
	fclose(fp);// this is used for closing the file
	
	printf("String in the file is: %s\n",str);
	printf("Integer in the file is: %d\n",a);
	printf("Float value in the file is: %0.02f\n",b);
	}
	return 0;
}