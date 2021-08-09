#include<stdio.h>
#include<rupesh.h>

void perform_task(int , int, int, float *, float *);

int main(void)
{
    int m1, m2, m3;
    float per, avg;

    printf("Enter marks of a student in three subjects\n");
    m1= inputInt();
    m2 = inputInt();
    m3 = inputInt();

    perform_task(m1, m2, m3, &avg, &per);
    
    printf("\nAverage marks of the student is: %0.2f", avg);
    printf("\nPercentage marks of the student is: %0.2f", per);

    return 0;
}

void perform_task(int m1, int m2, int m3, float *avg, float *per)
{
    *avg  = (m1+m2+m3)/3;

    *per = (*avg);
}