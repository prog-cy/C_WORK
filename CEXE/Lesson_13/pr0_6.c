#include<stdio.h>

int main(void)
{
    int a[20], size, i, s;

    printf("Enter the size of the array ");
    scanf("%d", &size);

    printf("\nEnter element \n");
    for(i = 0; i<size; i++)
        scanf("%d" , (a+i));
    
    printf("\nArray\n");
    for(i = 0; i<size; i++)
        printf("%d ", a[i]);
    
    s = *a;
    printf("\n\nSmallest element in the array\n");
    for(i = 1; i<size; i++)
    {
        if(s>a[i])
            s = *(a+i);

    }

    printf("%d", s);

    return 0;
}