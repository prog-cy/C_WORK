//printing format using structure and left justified format
#include<stdio.h>
#include<string.h>

//typedef is a way to create a alias name of struct or union
typedef struct student
{
    char name[10];
    int age;
    int yos;
}STRUCT; 

int main()
{
    STRUCT s[5];

    for(int i=0;i<5;i++)
    {
        scanf("%s%d%d",s[i].name,&s[i].age,&s[i].yos);
 
    }

    printf("\n");
    printf("%-10s%-10s%-10s\n","NAME","AGE","YEAR OF STUDYING");
    printf("%-10s%-10s%-10s\n","----","---","-----------------");


    for (int i=0;i<5;i++)
    {
        printf("%-10s%-10d%-20d\n",s[i].name,s[i].age,s[i].yos);
        //-10 is used for left justification 10 is used for right justification and it provides 10 whitespaces
    }

    return 0;
}