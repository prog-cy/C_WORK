// Program rewriting
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    float sal;
    printf("Enter the salary");
    sal = inputFloat();

    (sal>=25000 && sal<=40000)?printf("Manager\n"):((sal>=15000&& sal<=25000)?printf("Accountant\n"):printf("Clerk\n"));
    
    return 0;
}