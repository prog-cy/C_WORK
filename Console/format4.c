//creating a table using c format I/O
#include<stdio.h>

int main()
{
    char item[5][10]={"Sugar","Biscuit","Salt","Soap","Pulse"};
    int quan[5]={10,50,40,30,50};
    float price[5]={20.50, 5.0,10.43,10.67,50.80};

    printf("%-10s%-10s%-10s%30s\n","Sr.No","Item","Quantity in(kg)","Price in(Rupees per Kg)");
    printf("%-10s%-10s%-10s%30s\n","-----","-----","--------------","-----------------------");

    for (int i=0;i<5;i++)
        printf("%-10d%-10s%10d%25.2f\n",i+1,&item[i][0],quan[i],price[i]);

    return 0;
}