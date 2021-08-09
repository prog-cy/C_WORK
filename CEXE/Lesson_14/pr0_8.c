// Program for addition of two matrix 
#include<stdio.h>

void sum_mat(int m1[][6], int m2[][6],int m3[][6], int row, int col);
void display(int m[][6], int row, int col);
void create(int m[][6], int row,int col);

int main(void)
{
    int m1[6][6], m2[6][6], m3[6][6];

    printf("Enter number in matrix 1\n");
    create(m1, 6,6);

    printf("\nEnter number in matrix 2\n");
    create(m2, 6, 6);

    printf("\nMatrix 1\n");
    display(m1, 6,6);

    printf("\nMatrix 2\n");
    display(m2, 6,6);

    sum_mat(m1, m2, m3, 6, 6);
    printf("\nSum of matrix 1 and matrix 2 \n");
    display(m3, 6, 6);

    printf("\n");
    return 0;

    

}

void create(int m[][6], int row, int col)
{
    int i, j;
    printf("Enter 6 row and 6 column\n");

    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            scanf("%d", (*(m+i)+j));
        }
    }
    printf("\n");
}

void display(int m[][6], int row, int col)
{
    int i, j;

    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void sum_mat(int m1[][6], int m2[][6], int m3[][6], int row, int col)
{
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            m3[i][j] = m1[i][j]+m2[i][j];
        }
    }

}

