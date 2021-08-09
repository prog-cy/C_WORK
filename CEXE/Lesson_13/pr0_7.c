#include<stdio.h>

void modify(int *a, int size);

int main(void)
{
    int a[10], size, i;
    printf("Enter size of the array ");
    scanf("%d", &size);

    printf("\nEnter elements in the array\n");
    for(i = 0; i<size; i++)
        scanf("%d", (a+i));

    printf("\nArray is\n");
    for(i = 0; i<size; i++)
        printf("%d ", *(a+i));
    
    modify(a, size);
    printf("\n\nArray after modification\n");
    for(i = 0; i<size; i++)
        printf("%d ", *(a+i));
    
    return 0;
}

void modify(int *a, int size)
{
    int i;

    for(i = 0; i<size; i++)
        a[i] = a[i]*3;
}