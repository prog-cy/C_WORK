#include<stdio.h>
#include<conio.h>

int main()
{
    int a1,a2,a3;
    printf("Enter the angel of the triangle in degree\n");
    scanf("%d%d%d",&a1,&a2,&a3);

    if(a1+a2+a3==180)
        printf("Valid triangle\n");
    else
    {
        printf("Not valid\n");
    }
    getch();
    
}