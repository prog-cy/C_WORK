// program to check that a triangle is isosceles, equilateral, scalene, right angled triangle or not
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

    if ((side1 >= side2 && side1 >= side3) && (side1 < side2 + side3))
    {
        if (side1 == side2 == side3)
            printf("Equilateral triangle\n");
        else if ((side1 == side2) || (side2 == side3) || (side3 == side1))
            printf("Isosceles triangle\n");
        else if ((side1 > side2 && side1 > side3) || (side2 > side1 && side2 > side3) || (side3 > side2 && side3 > side1) )
        {
            if((side1*side1 == (side2*side2+side3*side3))||(side2*side2 == (side1*side1+side3*side3))||(side3*side3 == (side1*side1+side2*side2)))
                    printf("Right angled triangle\n");
            else
                printf("Scalene triangle\n");
        }    
        
    }
    else if ((side2 >= side1 && side2 >= side3) && (side2 < side1 + side3))
    {
        if (side1 == side2 == side3)
            printf("Equilateral triangle\n");
        else if ((side1 == side2) || (side2 == side3) || (side3 == side1))
            printf("Isosceles triangle\n");
        else if ((side1 > side2 && side1 > side3) || (side2 > side1 && side2 > side3) || (side3 > side2 && side3 > side1))
        {
            if ((side1 * side1 == (side2 * side2 + side3 * side3)) || (side2 * side2 == (side1 * side1 + side3 * side3)) || (side3 * side3 == (side1 * side1 + side2 * side2)))
                printf("Right angled triangle\n");
            else
                printf("Scalene triangle\n");
        }
        
    }
    else if ((side3 >= side2 && side3 >= side1) && (side3 < side1 + side2))
    {
        if (side1 == side2 == side3)
           printf("Equilateral triangle\n");
        else if ((side1 == side2) ||(side2 == side3) || (side3 == side1))
            printf("Isosceles triangle\n");
        else if ((side1 > side2 && side1 > side3) || (side2 > side1 && side2 > side3) || (side3 > side2 && side3 > side1))
        {
            if ((side1 * side1 == (side2 * side2 + side3 * side3)) || (side2 * side2 == (side1 * side1 + side3 * side3)) || (side3 * side3 == (side1 * side1 + side2 * side2)))
                printf("Right angled triangle\n");
            else
                printf("Scalene triangle\n");
        }
        
    }
    else
        printf("Triangle is not valid\n");

    return 0;
}