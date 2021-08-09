// program to calculate greatest of the three numbers
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    n1 = inputInt(); n2 = inputInt(); n3 = inputInt();

    (n1>n2 && n1>n3)?printf("%d is greatest", n1):((n2>n3 && n2>n3)?printf("%d is greatest", n2):printf("%d is greatest", n3));

    return 0;
}