//using putc function to write in the file

#include<stdio.h>

int main()
{
	FILE *fp;
	
	fp= fopen("file7.txt","w");
	
	putc('r',fp);
	
	putc('u',fp);
	fclose(fp);
	return 0;
	
	
}