// Program for picking up largest number from 5 x 5 matrix
#include<stdio.h>

int main(void)
{
    int a[5][5],i ,j, lgt;

    printf("Enter number in the matrix\n");
    for(i = 0; i<5; i++)
    {
        for(j = 0; j<5; j++)
            scanf("%d", (*(a+i)+j));

    }

    lgt = a[0][0];

    printf("\n\nMatrix is\n");
    for(i = 0; i<5; i++)
    {
        for(j = 0; j<5; j++)
        {
            if(lgt<a[i][j])
                lgt = a[i][j];
            printf("%d ", a[i][j]);
        }
            
        printf("\n");
    }

    
    printf("\n\nLargest number in matrix is\n");

    printf("%d", lgt);

    return 0;
}