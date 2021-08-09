#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("C:/Users/Rupesh Kumar Dwivedi/Desktop/C_work/p1.txt","r");
    
    ch=fgetc(fp);
    printf("%c",ch);
    printf("\n");
    fclose(fp);
    return 0;
}