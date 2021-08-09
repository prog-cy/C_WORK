#include<stdio.h>

void transpose(int a[][4], int row, int col);

int main(void)
{
    int a[4][4], i, j;

    printf("Enter number in the matrix\n");
    for(i = 0; i<4; i++)
    {
        for(j = 0; j<4; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\n\nArray is\n");
    for(i = 0; i<4; i++)
    {
        for(j = 0; j<4; j++)
            printf("%d ", *(*(a+i)+j));
        printf("\n");
    }

    transpose(a, 4, 4);

    printf("\n\n");

    return 0;
}

void transpose(int a[][4], int row, int col)
{
    int i, j;
    printf("\nTraspose of above matrix\n");
    for(i = 0; i<col; i++)
    {
        for(j = 0; j<row; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}