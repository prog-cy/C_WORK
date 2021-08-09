#include<stdio.h>
#define MAX 25

void search(int arr[], int size);

int main(void)
{
    int a[MAX], i,ch;
    printf("Enter 25 elements \n");

    for(i = 0; i<25; i++)
        scanf("%d", (a+i));

    printf("\n\nArray is\n");
    for(i=0; i<25; i++)
        printf("%d ", *(a+i));
    
    printf("\n");
    while (1)
    {
        search(a, 25);
        printf("\nEnter 1/0: ");
        scanf("%d", &ch);
        if(ch!=1)
            break;

    }
    

}


void search(int a[], int size)
{
    int i, data, cnt = 0;
    printf("\nEnter data that you want to search: ");

    scanf("%d", &data);

    for(i = 0; i<size; i++)
    {
        if(a[i] == data)
            cnt++;
    }

    for(i =0; i<size; i++)
    {
        if(a[i] == data)
        {
            printf("%d is present %d times\n", data, cnt);
            break;
        }
            
    }
}