// Program to give the grade to the steel on the basis of quality
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int hardness; float carbon_con; long int tensile_str;
    printf("Enter Hardness greater than 50: ");
    hardness = inputInt();
    printf("\nEnter value of carbon content less than 0.7: ");
    carbon_con = inputFloat();
    printf("\nEnter Tensile strength greater than 5600: ");
    tensile_str = inputLong();

    if(hardness>50 && carbon_con<0.7 && tensile_str>5600)
        printf("Grade is 10\n");
    else if(hardness>50 && carbon_con<0.7)
        printf("Grade is 9\n");
    else if(carbon_con<0.7 && tensile_str>5600)
        printf("Grade is 8\n");
    else if(hardness>50 && tensile_str>5600)
        printf("Grade is 7\n");
    else if(hardness>50 || carbon_con<0.7 || tensile_str>5600)
        printf("Grade is 6\n");
    else 
        printf("Grade is 5\n");
    
    return 0;    
}