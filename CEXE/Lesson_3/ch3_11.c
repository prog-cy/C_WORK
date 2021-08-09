#include<stdio.h>
#include<math.h>

int main()
{
    int x,y ,r, x1,y1 ,d;

    printf("Enter the center (x,y) of the circle\n");
    scanf("%d%d",&x,&y);

    printf("Enter the radius of the circle\n");
    scanf("%d",&r);

    printf("Enter point which we have to check where it lies\n");
    scanf("%d%d",&x1,&y1);

    d=sqrt(pow((x-x1),2)+pow((y-y1),2));

    if(d<r)
        printf("(%d,%d) lie inside the circle\n",x1,y1);
    else if(d==r)
        printf("(%d,%d) lie on the circle\n",x1,y1);
    else
        printf("(%d,%d) lie outside the circle\n",x1,y1);
    
    return 0;
}