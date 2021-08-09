#include<stdio.h>

int main(void)
{
    int a[4][4], i, j, a1[4][4], row, col;

    printf("Enter row and col\n");
    scanf("%d%d", &row, &col);

    printf("\nEnter number in array\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\n\nMatrix is\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%d ", a[i][j]);
            a1[j][i] = a[i][j];
        }

        printf("\n");
    }

    printf("\n\nTranspose Matrix\n");
    for(i = 0; i<col ; i++)
    {
        for(j = 0; j<row; j++)
            printf("%d ", a1[i][j]);

        printf("\n");
    }

    // logic for checking symmetric matrix
    if(row == col)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (a1[i][j] != a[i][j])
                    break;
            }

            if(j != row)
                break;
        }

        if(i == row)
            printf("\nMatrix is symmetric\n");
        else
            printf("\nMatrix is not symmetric\n");
    }

    else
    {
        printf("Matrix is not symmetric\n");
    }
    
    
    
    return 0;
}