#include <stdio.h>
#include <math.h>

void make_task(int a[]);

int main(void)
{
    int a[15], i;

    printf("Enter data in the array\n");

    for (i = 0; i < 15; i++)
        scanf("%d", (a + i));

    printf("\nArray is\n");
    for (i = 0; i < 15; i++)
        printf("%d ", a[i]);

    printf("\n");

    make_task(a);

    return 0;
}

void make_task(int a[])
{
    int sum = 0, i;

    float sum2 = 0, var, dev, mean;

    for (i = 0; i < 15; i++)
        sum += a[i];
    mean = sum / 15.0;

    for (i = 0; i < 15; i++)
        sum2 += ((a[i] - mean) * (a[i] - mean));

    var = sum2 / 15;

    dev = sqrt(var);

    printf("\nMean of above data: %0.2f\n", mean);

    printf("\nstandard deviation: %0.4f\n", dev);

    printf("\n");
}