#include<stdio.h>
#include<conio.h>

int main()
{
    int age1, age2, age3;
    printf("Enter age of Ram,Shyam and Ajay\n");
    scanf("%d%d%d",&age1,&age2,&age3);

    if(age1>age2)
        if(age1>age3)
            printf("Ram is Youngest\n");
    if(age2>age1)
        if(age2>age3)
            printf("Shyam is youngest\n");
    else
    {
        printf("Ajay is youngest\n");
    }
    
    getch();
}