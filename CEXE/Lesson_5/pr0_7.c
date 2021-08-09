// program count positive, negative, zero numbers enter through the user
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int n, pcnt = 0, ncnt = 0, zcnt = 0;
    
    int flag = 1;
    while (flag)
    {
       printf("Enter number: ");
       n = inputInt();

       if(n>0)
            pcnt++;
        else if(n<0)
            ncnt++;
        else
            zcnt++;
        printf("\nWould you want to enter number again enter 1 and 0 to exit: ");
        int ch = inputInt();
        if(ch!=1)
            flag = 0; 
    }
    
    printf("\n%d positive , %d negative and %d zero has been entered by the user\n\n\n", pcnt, ncnt, zcnt);
}