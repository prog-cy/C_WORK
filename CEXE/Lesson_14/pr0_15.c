#include <stdio.h>

void make_task(float *x, float *y);

int main(void)
{
    int i;

    float x[10], y[10];

    printf("Enter value in the array x \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("\n\nEnter value in array y \n");
    
    for (i = 0; i < 10; i++)
        scanf("%f", &y[i]);

    printf("\nArray x\n");
    for (i = 0; i < 10; i++)
        printf("%0.1f ", x[i]);
    printf("\nArray y\n");
    for (i = 0; i < 10; i++)
        printf("%0.1f ", y[i]);

    make_task(x, y);
    return 0;
}

void make_task(float *x, float *y)
{
    float sum[4] = {0.0};

    for (int i = 0; i < 10; i++)
    {
        sum[0] += (x[i] * y[i]);
        sum[1] += x[i];
        sum[2] += y[i];
        sum[3] += (x[i] * x[i]);
    }

    float mx = sum[1] / 10, my = sum[2] / 10;

    float numerator = ((10 * sum[0]) - (sum[1] * sum[2]));
    float denominator = ((10 * sum[3]) - (sum[1] * sum[1]));

    float b = numerator / denominator;

    float a = sum[2] - (b * sum[1]);

    printf("\nStraight line is y = %0.2f+%02.fx\n", a, b);
}
