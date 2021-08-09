#include<stdio.h>
#include<math.h>


int main()
{
    int  s1, s2, s3;
    float s,area;
    printf("Enter sides of the triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    s=(s1+s2+s3)/2;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("Area of the triangle is: %f",area);
    return 0;
}