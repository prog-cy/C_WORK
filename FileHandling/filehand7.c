//using fseek() and SEEK_END we will modify the file content without erasing previous content of file

#include<stdio.h>
#include<string.h>
#define flag 1

int main()
{
	FILE *fp;
	char str[40];
	fp=fopen("filehand6.txt","r+");//r+ mode is important to complete this task
	rewind(fp);
	
	printf("Add new content in the file\n");
	while(flag)
	{
		gets(str);
		fseek(fp,0,SEEK_END);//this line brings the cursur beyond the old content in the file.
		fputs(str,fp);
		fputs("\n",fp);
		if(strlen(str)==0)
			break;
	}
	fclose(fp);
	
	return 0;
	
}
