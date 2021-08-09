#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fs;

    char ch;

    if(argc != 2)
    {
        printf("improper number of arguments\n");
        exit(1);
    }

    fs = fopen(argv[1], "r+");

    if(fs == NULL)
    {
        printf("Can not open the file\n");
        exit(2);
    }

    while((ch = fgetc(fs)) != EOF)
        fputc(ch, stdout);

    fclose(fs);

    return 0;
}