//write a table in the file taking table name by user

#include<stdio.h>

int main()
{
	FILE *fp;
	int n;
	printf("Enter the value of target table\n");
	scanf("%d",&n);
	
	fp=fopen("fexe2.txt","w");
	
	for(int i=1;i<=10;i++)
	{
		fprintf(fp,"%d x %d = %d\n",n,i,n*i);//this line will print the content in the file
	}
	printf("Successfully written the table of %d in the file\n",n);
	fclose(fp);
	return 0;
}