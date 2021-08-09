#include"stdio.h"
#include"math.h"

int main()
{
    int a=1189 ,b=841,c,i=0;

    printf("Size of the paper is \n");

    for (;i<=8;i++)
    {
    printf("A%d=%d mm x %d mm\n",i,a,b);

    c=a;
    a=b;
    b=c/2;
    }
}
