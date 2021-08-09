//reading the file content from file created in file 
#include<stdio.h>


int main()
{
	FILE *fp;
	int num;
	
	fp=fopen("file4.txt","r");
	if(fp==NULL)
		printf("file does not exist");
	else{
		fscanf(fp,"%d",&num);
		fclose(fp);
		printf("The number in the file is: %d\n",num);
	}
	return 0;
}