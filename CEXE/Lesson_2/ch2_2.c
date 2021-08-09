#include<stdio.h>

int main()
{
    int n, n1, n2, n3, rev=0;
    printf("Enter the five-digit number:\n");
    scanf("%d",&n);
    //whole description  for printing the reverse of the number

    rev+=n%10;
    n1=n/10;
    rev=rev*10+n1%10;
    n2=n1/10;
    rev=rev*10+n2%10;
    n3=n2/10;
    rev=rev*10+n3%10;
    rev=rev*10+n3/10;

    printf("Reverse of the five digit number is: %d\n",rev);
    return 0;
}