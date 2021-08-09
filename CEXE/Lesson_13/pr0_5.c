#include<stdio.h>
#define MAX 20

int main(void)
{
    int a[MAX], size, i, j; 

    printf("Enter size of the array ");
    scanf("%d", &size);

    j = size-1;

    printf("\nEnter array elements\n");
    for(i = 0; i<size; i++)
        scanf("%d", (a+i));

    printf("\n\nArray\n");
    for(i = 0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n\n");
    for(i = 0; i<size; i++)
    {
        if(a[i] == a[j] && i<=j)
            printf("a[%d] = a[%d]\n", i, j);
        j--;
    }

    printf("\n\n");

    return 0;
}