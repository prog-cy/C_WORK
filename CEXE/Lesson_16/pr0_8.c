// Program to count occurrences of succession vowels
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[50];
	
	// In the below string of character we are storing all possible arrangements
	// of 2 successive vowel out of 5 vowels.
	// using permutation we have calculated total number of arrangements.
	// we have total 5 vowels and we have to choose only 2 and then arrange them.
	char *vo[20] = {
						"ae", "ai", "ao", "au",
						"ea", "ei", "eo", "eu",
						"ia", "ie", "io", "iu",
						"oa", "oe", "oi", "ou",
						"ua", "ue", "ui", "uo"
				};
				
	int i, j, cnt = 0;
	
	printf("Enter string: ");
	scanf("%[^\n]s", str);
	
	for(j = 0; j<19; j++){
		
		i = 0;
		while(str[i] != '\0'){
		
			if(strnicmp(str+i, vo[j], 2) == 0)
				cnt++;
		i++;
		}
	}
	
	
	printf("occurrence of suuccessive vowel is: %d\n", cnt);
	
	return 0;
}