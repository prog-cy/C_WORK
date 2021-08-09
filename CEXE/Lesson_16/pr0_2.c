#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str[] = {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"};

    char *s, sub[20];

    int len1, len2, i, j, flag;

    printf("Enter string that you want to search: ");
    scanf("%[^\n]s", sub);

    len2 = strlen(sub);

    // This is for assigning new multiword string to a pointer to string s.
    for (i = 0; i < 6; i++)
    {
        j = 0;
        flag = 0;

        s = str[i];

        len1 = strlen(s);
        
        // In while loop we are finding substring in each string
        while (s[j] != '\0')
        {
            if (len2 > len1) // if len of substring is greater, then come out of loop
                break;

            // In below line we are comparing substring of string with search string 
            if (strncmp(s + j, sub, len2) == 0)
            {
                flag = 1;
                break;
            }
            j++;
        }

        if (flag == 1)
        {
            printf("\"%s\" is embedded in \"%s\"\n", sub, s);
            break;
        }
    }

    if (flag == 0)
        printf("\"%s\"is not embedded\n", sub);

    printf("\n\n");
    return 0;
}