#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    float d, d1, d2;
    printf("Enter first point (x1,y1) on line\n");
    scanf("%d%d", &x1, &y1);

    printf("Enter second point (x2,y2) on line\n");
    scanf("%d%d", &x2, &y2);

    printf("Enter third point (x3,y3) on line\n");
    scanf("%d%d", &x3, &y3);

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    d1 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    d2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

    if (d == (d1 + d2))
        printf("(%d,%d), (%d,%d) and (%d,%d) lie on a straight line\n", x1, y1, x2, y2, x3, y3);
    else if (d1 == (d + d2))
        printf("(%d,%d), (%d,%d) and (%d,%d) lie on a straight line\n", x1, y1, x2, y2, x3, y3);
    else if (d2 == (d + d1))
        printf("(%d,%d), (%d,%d) and (%d,%d) lie on a straight line\n", x1, y1, x2, y2, x3, y3);
    else
        printf("(%d, %d), (%d,%d) and (%d,%d) does not lie on a straight line\n", x1, y1, x2, y2, x3, y3);

    return 0;
}