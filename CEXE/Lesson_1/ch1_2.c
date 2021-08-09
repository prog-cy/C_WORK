#include <stdio.h>

int main()
{
    int d, m_d, c_d;
    float f_d, In_d;

    printf("Enter thw distance in Km: ");
    scanf("%d", &d);
    m_d = d * 1000;
    c_d = d * 100000;
    f_d = d * 1000 * 3.28;
    In_d = d * 1000 * 39.27;

    printf("Distance in meters:%d  Distance in centimeters:%d\n", m_d, c_d);
    printf("Distance in feet:%f Distance in Inches:%f", f_d, In_d);
    return 0;
}