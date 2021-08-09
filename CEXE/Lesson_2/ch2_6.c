#include<stdio.h>
#include<math.h>

int main()
{
    float t, wcf, a;
    int v;
    printf("Enter temperature in deg and velocity in m/s\n");
    scanf("%f%d",&t,&v);

    a=pow(v, 0.16);

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*a;

    printf("value of wind chill factor: %0.02f\n",wcf);
    return 0;

}