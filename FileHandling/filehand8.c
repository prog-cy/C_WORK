//reading content from the file and also getting the position of cursur.
#include<stdio.h>
#include<string.h>


int main()
{
	FILE *fp;
	char ch;
	
	long int position;
	
	
	fp=fopen("filehand6.txt","r");
	
	position=ftell(fp);//this line tells the position of the cursur in the file.
	
	printf("position of the cursur in the file: %ld\n",position);
	printf("\n");
	while(1)
	{
		ch=getc(fp);
		if(ch==EOF)
			break;
		printf("%c",ch);
		
	}
	fclose(fp);
	return 0;
}