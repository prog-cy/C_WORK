// Program to remove occurrences of 'the' in a line.
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[80];
	
	int i = 0, j, chk;
	
	printf("Enter string: ");
	scanf("%[^\n]s", str);
	
	while(str[i] != 0)
	{
		chk = 0;
		
		if(strnicmp(str+i, "the", 3) == 0)
		{
			j = i;
			
			while(str[j] != '\0'){
				str[j] = str[j+3];
				j++;
				
			}
			chk = 1;
				
		}
		
		if(chk == 0)
			i++;
	}
	
	printf("\nString (without the): %s\n", str);
	
	return 0;
}