// Program for interchanging array element at odd and even positions in the array
#include<stdio.h>
#define MAX 20

void interchange(int arr[], int size);
int main(void)
{
    int a[MAX], size, i;

    printf("Enter size of the array");
    scanf("%d", &size);

    printf("\nEnter element in the array\n");
    for(i = 0; i<size ; i++)
        scanf("%d", &a[i]);
    
    printf("\nArray elements\n");
    for(i = 0; i<size; i++)
        printf("%d ", a[i]);
    
    interchange(a, size);
    printf("\n\nArray after interchange\n");

    for(i = 0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}


void interchange(int arr[], int size)
{
    int i, temp;

    for(i = 0; i<size-1; i = i+2)
    {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
    }
}
