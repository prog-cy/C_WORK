// program to check that given triangle is valid or not
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int side1, side2, side3;
    printf("Enter side first: ");
    side1 = inputInt();
    printf("Enter side second: ");
    side2 = inputInt();
    printf("Enter side third: ");
    side3 = inputInt();

    if((side1>=side2 && side1>=side3) && (side1<side2+side3))
        printf("Triangle is valid\n");
    else if((side2>=side1 && side2>=side3) && (side2<side1+side3))
        printf("Triangle is valid\n");
    else if((side3>=side2 && side3>=side1) &&(side3<side1+side2))
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
    
    return 0;

}
