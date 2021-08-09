#include<stdio.h>

void cal_r(float x[], float y[]);

int main(void)
{
    float x[11], y[11];
    int i;

    printf("Enter data in array x\n");
    for(i = 0; i<11; i++)
        scanf("%f", &x[i]);
    
    printf("\nEnter data in array y\n");
    for(i = 0; i<11; i++)
        scanf("%f", &y[i]);

    cal_r(x, y);

    return 0;
    
}

void cal_r(float *x, float *y)
{
    float sum[5] = {0.0};

    int i;

    for(i = 0; i<11; i++)
    {
        sum[0]+=(x[i]*y[i]);
        sum[1]+=x[i];
        sum[2]+=y[i];
        sum[3]+=(x[i]*x[i]);
        sum[4]+=(y[i]*y[i]);
    }

    float numerator =  sum[0] - (sum[1]*sum[2]);
    float denominator = (((11*sum[3])-(sum[1]*sum[1]))*((11*sum[4])-(sum[2]*sum[2])));

    float r = numerator/denominator;

    printf("\n\nCorrelation coefficient r = %0.3f\n", r);

    printf("\n\n");
}