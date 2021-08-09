// Program to calculate overtime pay of 10 employees
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int i=0;
    int total_hour;
    float overtime_pay;

    while (++i<=10)
    {
        printf("Enter tolal hour for employee %d: ", i);
        total_hour = inputInt();

        overtime_pay = (total_hour-40)*12.00;
        printf("Overtime pay of employee %d is %0.2f rupees\n", i, overtime_pay);
    }

    return 0;
    
}