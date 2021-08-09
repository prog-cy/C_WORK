#include <stdio.h>

int main()
{
    int T_F;
    float T_c;

    printf("Enter the temperature in Fahrenheit degrees: ");
    scanf("%d", &T_F);
    T_c = (T_F - 32) * 5 / 9;
    printf("Temperature in Centigrade: %0.0f", T_c);
    return 0;
}