// Program to calculate the range of given set of numbers
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int min = 0, max = 0, num;
    int flag = 1;

    while(flag)
    {
        printf("Enter number: ");
        num= inputInt();

        if(num<min)
            min = num;
        if(num>max)
            max = num;
        
        printf("\nEnter(1/0): ");
        int ch = inputInt();
        if(ch!=1)
            flag = 0;
    }

    printf("\n\nRange is: %d\n\n", (max-min));

    return 0;
}
