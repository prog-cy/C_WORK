#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the point (x,y)\n");
    scanf("%d%d", &x, &y);

    if (x == 0)
    {
        if(y!=0)
            printf("(%d,%d) lie on Y-axis\n", x, y);
        else
            printf("(%d,%d) lie on origin\n",x,y);
    }
    else if (y == 0)
        printf("(%d,%d) lie on X-axis\n", x, y);
    else
        printf("(%d,%d) does not lie on X-axis, Y-axis and origin\n", x, y);

    return 0;
}