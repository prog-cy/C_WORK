//In  this program we will read the content character wise using  fgetc function

#include<stdio.h>

int main()
{
	FILE *fp;
	char c;
	
	fp=fopen("file1.txt","r");
	if(fp==NULL)
		printf("File does not exist\n");
	else{
	
	 c=fgetc(fp);
	
	printf("First character in the file is: %c\n",c);
	}
}