#include <stdio.h>
#include <math.h>

void find_dis(int a[][2]);

int main(void)
{
    int a[10][2], i;

    printf("Enter (x, y) points in the array\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d%d", &a[i][0], &a[i][1]);
    }

    printf("\nlist of points\n");
    printf("       (x, y)\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d --> (%d, %d)\n",(i+1), a[i][0], a[i][1]);
    }

    find_dis(a);

    return 0;
}

void find_dis(int a[][2])
{
    int i;

    float dis = 0.0, x, y, sum;

    for (i = 0; i < 10; i++)
    {
        x = ((a[i][0] - a[i + 1][0]) * (a[i][0] - a[i + 1][0]));

        y = ((a[i][1] - a[i + 1][1]) * (a[i][1] - a[i + 1][1]));

        dis = sqrt(x + y);

        sum += dis;
    }

    printf("\nDistance from (%d, %d) to (%d, %d) is %0.3f\n", a[0][0], a[0][1], a[9][0], a[9][1], sum);
}