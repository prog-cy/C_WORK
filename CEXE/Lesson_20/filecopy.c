// Using command line argument to copy one file text to other
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fs, *ft;

    char ch;

    if(argc != 3){

        printf("Improper arguments\n");
        exit(1);
    }

    fs = fopen(argv[1], "r");

    if(fs == NULL){
        printf("Cannot open the file\n");
        exit(2);
    }

    ft = fopen(argv[2], "w");

    if(ft == NULL){
        printf("\nCannot open the file\n");
        exit(3);
        
    }

    while ((ch = fgetc(fs)) != EOF){
        
        fputc(ch, ft);
    }

    fclose(fs);
    fclose(ft);
    

    return 0;

}