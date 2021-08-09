#include<stdio.h>

int main(void)
{
    char str1[10], str2[10], str3[10], str4[10];

    printf("Enter strings\n");

    scanf("%s%s%s%s", str1, str2, str3, str4);

    printf("\n\nStrings which you entered\n");

    printf("%s %s %s %s\n\n", str1, str2, str3,str4);

    return 0;
}