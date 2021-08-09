//printing in format with left justification
#include<stdio.h>

int main()
{
    char name[6][10];// this is the way to define multiple string 
    int age[7];
    int roll_no[7];

    for (int i=0;i<5;i++)
    {
        
        scanf("%s%d%d", &name[i][0],&age[i],&roll_no[i]);
        fflush(stdin);
    }

    printf("\n");
    printf("%-10s%-10s%-10s\n","Name","Age","Roll_no");
    printf("%-10s%-10s%-10s\n","-----","-----","-------");
    for (int i=0;i<5;i++)
    {
        printf("%-10s%-10d%-10d\n",&name[i][0],age[i],roll_no[i]);
    }

    return 0;
}