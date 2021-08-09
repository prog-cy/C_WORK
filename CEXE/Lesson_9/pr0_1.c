#include<stdio.h>
#include<rupesh.h>
#include<math.h>

void perform_task(int a, int b, int c, int d, int e, int *sum, float *avg, float *dev);

int main(void)
{
    int n1, n2, n3, n4, n5;
    printf("Enter five integer: ");
    n1 = inputInt(), n2 = inputInt(), n3 = inputInt(), n4 = inputInt();
    n5 = inputInt();

    int sum = 0;
    float avg = 0.0;
    float dev = 0.0;

    perform_task(n1, n2, n3, n4, n5, &sum, &avg, &dev);
    printf("\nSum is %d ", sum);
    printf("\nAverage is %0.2f ", avg);
    printf("\nStandard deviation %0.3f\n\n", dev);

    return 0;
}

void perform_task(int a, int b, int c, int d, int e, int *sum, float *avg, float *dev)
{
    *sum = a + b + c + d + e;

    *avg = (*sum) / 5;

    float v1, v2, v3, v4, v5;
    v1 = (a - *avg) * (a - *avg);
    v2 = (b - *avg) * (b - *avg);
    v3 = (c - *avg) * (c - *avg);
    v4 = (d - *avg) * (d - *avg);
    v5 = (e - *avg) * (e - *avg);

    float variance;
    variance = (v1 + v2 + v3 + v4 + v5) / 5;

    *dev = sqrt(variance);
}
    