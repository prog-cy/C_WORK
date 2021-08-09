#include<stdio.h>

int main()
{
    int n,n1,n2,n3, sum=0;
    printf("Enter the five digit number: ");
    scanf("%d",&n);
    // whole description of printing the sum of digits
    sum+=n%10;
    n1=n/10;
    sum+=n1%10;
    n2=n1/10;
    sum+=n2%10;
    n3=n2/10;
    sum+=n3%10;
    sum+=n3/10;
    printf("Sum of the digits of the given number is: %d\n",sum);
    return 0;

}