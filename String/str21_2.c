// Program to take name from the user
#include<stdio.h>

int main(void)
{
    char names[7][20];
    int i;

    printf("Enter 7 people names\n");

    for(i = 0; i<7; i++)
        scanf("%s", &names[i][0]);

    printf("\nName of 7 people\n");
    for(i = 0; i<7; i++)
        printf("%s\n", &names[i][0]);

    printf("\n");

    return 0;

}