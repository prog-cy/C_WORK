//writing in binary file and reading from the binary file
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char str[30];
	
	
	
	fp=fopen("filehand4.bin","wb");//opening a binary file
	
	//Taking input by keyboard and print this into binary file
	printf("writing in the binary file\n");
	do{
		gets(str);// this line takes input from the keyboard
		fwrite(str,sizeof(str),1,fp);//this line writes in the binary file.
	}while(strlen(str)>0);
		
	fclose(fp);
	
	// reading from the file and printing the content on the console
	printf("reading from the file\n");
	fp=fopen("filehand4.bin","rb");
	do
	{
		fread(str,sizeof(str),1,fp);// this line reads from the binary file.
		printf("%s \n",str);// this line prints on the console.
	}while(strlen(str)>0);
	
		
	
	fclose(fp);
	return 0;
}