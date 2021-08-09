// Program for multilication of two matrix
#include <stdio.h>

void multi(int m1[][3], int m2[][3], int m3[][3], int row, int col);
void display(int m[][3], int row, int col);
void create(int m[][3], int row, int col);

int main(void)
{
    int m1[3][3], m2[3][3], m3[3][3];

    printf("Enter number in matrix 1\n");
    create(m1, 3, 3);

    printf("\nEnter number in matrix 2\n");
    create(m2, 3, 3);

    printf("\nMatrix 1\n");
    display(m1, 3, 3);

    printf("\nMatrix 2\n");
    display(m2, 3, 3);

    multi(m1, m2, m3, 3, 3);
    printf("\nmultipication of matrix 1 and matrix 2 \n");
    display(m3, 3, 3);

    printf("\n");
    return 0;
}

void create(int m[][3], int row, int col)
{
    int i, j;
    printf("Enter 3 row and 3 column\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", (*(m + i) + j));
        }
    }
    printf("\n");
}

void display(int m[][3], int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void multi(int m1[][3], int m2[][3], int m3[][3], int row, int col)
{
    int i, j, k, sum;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum = 0;
            for (k = 0; k < col; k++)
                sum += (m1[i][k] * m2[k][j]);
            m3[i][j] = sum;
        }
    }
}