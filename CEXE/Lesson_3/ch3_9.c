#include<stdio.h>

int main()
{
    int l=5,b=4;

    int area=l*b;
    int perimeter=2*(l+b);

    if(area>perimeter)
        printf("Area is greater than perimeter\n");

    else
    {
        printf("Area is not greate than perimeter\n");
    }
    return 0;
    
}