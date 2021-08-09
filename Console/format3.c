//creating a proper table using c console I/O
#include<stdio.h>

int main()
{
    char c[6][10]={
        "rupesh",
        "ram",
        "rohan",
        "rocky",
        "varun"

             };

    int age[10]={20,21,22,23,24};

    printf("%-10s%-10s%10s\n","Sr.No","Name","Age");
    printf("%-10s%-10s%10s\n","-----","-----","----");

    for (int i=0;i<5;i++)
    {
        printf("%-10d%-10s%10d\n",i+1,&c[i][0],age[i]);
    }

    return 0;


        
}