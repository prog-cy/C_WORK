// program to find all combinations of 1, 2 and 3
#include<stdio.h>

int main(void)
{
    int i, a = 1, b =2, c =3 ,t;

    printf("All combinationa of 1, 2 and 3\n");
    for(i=0; i<6; i++)
    {
        printf("%d%d%d\n", a, b ,c);

        if(i%2 == 0)
        {
            t = c;
            c = b;
            b = t;
        }

        else if(i%2 != 0)
        {
            t = c;
            c = a;
            a = t;
        }
    }

    printf("\n\n");
    return 0;
}