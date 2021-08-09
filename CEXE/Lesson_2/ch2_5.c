#include<stdio.h>
#include<math.h>


int main()
{
    float L1, L2, G1,G2, rL1, rL2, rG1,rG2, d, phi, val1;
    const float PI=3.14159265;

    printf("Enter values of latitude (L1, L2) in degree\n");
    scanf("%f%f",&L1,&L2);
    printf("Enter values of longitude(G1, G2) in degree\n");
    scanf("%f%f",&G1,&G2);

    rL1=L1*PI/180.0; rL2=L2*PI/180.0; rG1=G1*PI/180; rG2=G2*PI/180.0;//degree to radian in this line

    val1=(sin(rL1)*sin(rL2)+cos(rL1)*cos(rL2)*cos(rG1-rG2));
    phi=acos(val1);

    d=3963*phi;

    printf("Distance between the latitue and longitude in nautical miles: %0.03f\n",d);

    return 0;
}