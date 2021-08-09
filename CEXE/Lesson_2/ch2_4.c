#include <stdio.h>
#include <math.h>

int main()
{
    const float PI = 3.14159265;
    float x, y;
    float r, phi;
    printf("Enter the cartesian co-ordinates(x,y)\n");
    scanf("%f%f", &x, &y);
    //this function is defined in math.h header file
    r = sqrt(pow(x, 2) + pow(y, 2));
    phi = atan(y / x) * (180.0 / PI);
    printf("polar co-ordinates of (%0.0f , %0.0f) is (%0.2f , %0.2f)\n", x, y, r, phi);
    return 0;
}