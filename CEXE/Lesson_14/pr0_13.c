#include<stdio.h>
#include<math.h>

void find_area(float a[], float b[], float ang[]);

int main(void)
{
    float a[6], b[6], ang[6];
    int i;

    printf("Enter data in array a\n");
    for(i = 0; i<6; i++)
        scanf("%f", &a[i]);
    printf("\nEnter data in array b\n");
    for(i = 0; i<6; i++)
        scanf("%f", &b[i]);
    
    printf("\nEnter data in ang\n");
    for(i = 0; i<6; i++)
        scanf("%f", &ang[i]);
    
    find_area(a, b, ang);

    return 0;
}


void find_area(float a[], float b[], float ang[])
{
    int i;
    float area;

    for(i = 0; i<6; i++)
    {
        area = (a[i]*b[i]*sin(ang[i]))/2;

        printf("Area of plot no: %d is %0.2f\n", (i+1), area);
    }

    printf("\n");
}