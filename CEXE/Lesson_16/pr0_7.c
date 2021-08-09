// Program to print abbreviation of given name
#include<stdio.h>

int main(void)
{
	char name[6][30], abb[6][4];
	
	int i, j, k;
	
	printf("Enter names: \n");
	for(i = 0; i<6; i++)
	{
		scanf("%[^\n]s", &name[i][0]);
		getchar();
	}
	
	printf("\n");
	
	for(i = 0; i<6; i++)
	{
		j = 0, k = 0;
		
		while(name[i][j] != '\0')
		{
			abb[i][0] = name[i][0];
			
			if(name[i][j] == ' ')
			{
				k++;
				abb[i][k] = name[i][j+1];
			}
			
			j++;
		}
		abb[i][k+1] = '\0';
	}
	
	printf("\nAbbrviation name: \n");
	for(i = 0; i<6; i++)
		printf("%s\n", &abb[i][0]);
	
	return 0;
}