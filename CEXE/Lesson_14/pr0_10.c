// program for circulary shift the row element by given position
#include<stdio.h>

void create(int m[][5], int row, int col);
void display(int m[][5], int row, int col);
void circular_shift(int m[][5], int row, int col, int pos);
int main(void)
{
    int m[4][5];

    printf("Enter number in 4 x 5 matrix\n");
    create(m, 4,5);

    printf("\nMatrix is\n");
    display(m, 4,5);

    circular_shift(m, 4, 5, 2);
    printf("\nAfter shifting each row matrix is\n");
    display(m, 4, 5);

    printf("\n");

    return 0;

}

void create(int m[][5], int row, int col)
{
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
            scanf("%d", (*(m+i)+j));
    }

    printf("\n");
}

void display(int m[][5], int row, int col)
{
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
            printf("%d ", *(*(m+i)+j));
        printf("\n");
    }

    printf("\n");
}

void circular_shift(int m[][5], int row, int col , int pos)
{
    int i, j, k, n;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<pos; j++)
        {
            n = m[i][0];

            for(k = 0; k<col; k++)
                m[i][k] = m[i][k+1];
            m[i][col-1] = n;
        }
    }

    printf("\n");
}