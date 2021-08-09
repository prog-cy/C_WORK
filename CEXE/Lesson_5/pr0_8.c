// Program to calculate octal equivalent of a number
#include<stdio.h>
#include<rupesh.h>
#include<math.h>

int main(void)
{
    int n, num = 0, rem, n1, val = 1;
    printf("Enter number: ");
    n = inputInt();

    n1 = n;

    // loop for storing remainder in a num
    while (n>0)
    {
        rem = n%8;
        num = num + rem*val;
        val =  val*10;
        n = n/8;

    }
    
    printf("Octal equivalent of %d is %d\n\n", n1, num);

    return 0;
    
}