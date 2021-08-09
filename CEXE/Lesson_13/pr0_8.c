// Program for insertion sort
#include<stdio.h>

void insert_sort(int a[], int size);

int main(void)
{
    int a[20], size, i; 

    printf("Enter size ");
    scanf("%d", &size);

    printf("\nEnter array element\n");
    for(i = 0; i<size; i++)
        scanf("%d", (a+i));
    
    printf("\n\nArray is\n");
    for(i = 0; i<size; i++)
        printf("%d ", *(a+i));
    
    insert_sort(a, size);
    printf("\n\nSorted Array is\n");
    for(i = 0; i<size; i++)
        printf("%d ", *(a+i));
    
    return 0;
}

void insert_sort(int a[], int size)
{
    int i, j, k;

    for(i = 1; i<size; i++)
    {
        k = a[i];

        for(j = i-1; j>=0 && k<a[j]; j--)
            a[j+1] = a[j];
        a[j+1] = k;
    }
}