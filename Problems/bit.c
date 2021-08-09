#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,count=0;
    char data[80];

    printf("Enter the bits:");
    scanf("%s",data);

    printf("Data bits before bit stuffing %s:",data);
    printf("\nData bits after bit stuffing:");

    for(;i<strlen(data);i++)
    {
        if (data[i]=='1')
            count++;
        else
            count=0;
         printf("%c",data[i]);
        if(count==5)
        {
            printf("0");

        }
    }
    return 0;
}
