#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num,n1,n2,n3,n4,rem=0;
    printf("Enter five digit number number\n");
    scanf("%d",&n);
    num=n;

    rem=n%10;
    n2=n/10;
    rem=rem*10+n2%10;
    n3=n2/10;
    rem=rem*10+n3%10;
    n4=n3/10;
    rem=rem*10+n4%10;
    rem=rem*10+n4/10;

    if(num==rem)
        printf("Numbers are equal\n");
    else
    {
        printf("Not equal\n");
    }
    getch();

}