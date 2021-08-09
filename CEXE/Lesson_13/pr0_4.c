#include<stdio.h>
#define MAX 30

int main(void)
{
    int a[MAX], i;

    static int cnp, cnn, cne, cno;

    printf("Enter 25 elements \n");

    for (i = 0; i < 25; i++)
        scanf("%d", (a + i));

    printf("\n\nArray is\n");
    for (i = 0; i < 25; i++)
        printf("%d ", a[i]);

    for(i = 0 ;i<25; i++)
    {
        if(a[i]>0)
            cnp++;
        if(a[i]%2 == 0)
            cne++;
        if(a[i]<0)
            cnn++;
        else
            cno++;
    } 

    printf("\n\nPositive = %d negative = %d, even = %d odd = %d\n", cnp, cnn, cne, cno);


}