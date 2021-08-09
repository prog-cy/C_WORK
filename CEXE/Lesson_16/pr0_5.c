// Program to delete all vowels from a given string
#include<stdio.h>
#include<string.h>

int check_vowel(char ch);
int main(void)
{
    char str[80], s[40];

    int i = 0, k = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    printf("\nString is: %s\n", str);

    while (str[i] != '\0')
    {
		if(check_vowel(str[i]));
		else
		{
			s[k] = str[i];
			k++;
		}
        
        i++;
    }
	
	s[k] = '\0';

    printf("\nString after removing vowels: %s\n\n", s);

    return 0;
    
}

int check_vowel(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'A':
			return 1;
			break;
		case 'e':
		case 'E':
			return 1;
			break;
		case 'i':
		case 'I':
			return 1;
			break;
		case 'o':
		case 'O':
			return 1;
			break;
		case 'u':
		case 'U':
			return 1;
			break;
		default:
			return 0;
	}
}