// Program for copying array element
#include<stdio.h>
#define MAX 20

void copy(int a1[], int a2[], int size);

int main(void)
{
    int a1[MAX], a2[MAX], size, i;

    printf("Enter size of the array ");
    scanf("%d", &size);

    printf("\nEnter elements in the array\n");
    for(i = 0; i<size; i++)
        scanf("%d", (a1+i));
    
    printf("\n\nArray a1\n");
    for(i = 0; i<size; i++)
        printf("%d ", *(a1+i));
    
    copy(a1, a2, size);
    printf("\n\nArray a2\n");
    for(i = 0; i<size; i++)
        printf("%d ", *(a2+i));
    
    return 0;
}

void copy(int *a1, int *a2, int size)
{
    int i;
    for(i = 0; i<size; i++)
        a2[i] = a1[i];
}