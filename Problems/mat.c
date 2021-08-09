#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int m[3][3],sumr1=0, sumr2=0,sumc1=0,sumc2=0;

    printf("---Input---\n");
    printf("\t");
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("The sum of rows and columns of the matrix is:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ", m[i][j]);
            if (i==0)
                sumr1+=m[i][j];
            if (i==1)
                sumr2+=m[i][j];
            if (j==0)
                sumc1+=m[i][j];
            if (j==1)
                sumc2+=m[i][j];
        }
        if(i==0)
            printf("%d ", sumr1);
        if (i==1)
            printf("%d",sumr2);
        printf("\n");
    }
    printf("\n");
    printf("%d ", sumc1);
    printf("%d", sumc2);
    return 0;
}