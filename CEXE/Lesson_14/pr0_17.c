#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int left = -1, right = MAX - 1;
char deq[MAX];

void pushl(char ch);
void pushr(char ch);
char popl();
char popr();
void display();

int main(void)
{
    int ch;

    char ch1, ch2;

    while (1)
    {
        printf("1.pushl\n");
        printf("2.pushr\n");
        printf("3.popl\n");
        printf("4.popr\n");
        printf("5.display\n");
        printf("6. Exit\n");

        printf("Enter choice: ");

        scanf("%d", &ch);

        fflush(stdin);
        switch (ch)
        {
        case 1:
            printf("Enter char ");
            scanf("%c", &ch1);
            pushl(ch1);
            break;
        case 2:
            printf("\nEnter char ");
            scanf("%c", &ch1);
            pushr(ch1);
            break;
        case 3:
            ch2 = popl();
            printf("deleted char is %c\n", ch2);
            break;
        case 4:
            ch2 = popr();
            printf("deleted char is %c\n", ch2);
            break;
        case 5:
            display();
            break;
        case 6:
            exit(1);
        default:
            break;
        }

        printf("\n");
    }
}

void pushr(char ch)
{
    if (left == right)
        printf("queue is full\n");
    else
    {
        left++;
        deq[left] = ch;
    }
}

void pushl(char ch)
{

    if (right == left)
        printf("dequeue is full\n");
    else
    {
        deq[right] = ch;
        right--;
    }
}

char popr()
{
    char ch;
    if (left == -1)
        printf("dequeue is empty\n");
    else
    {
        ch = deq[left];
        left--;
    }

    return ch;
}

char popl()
{
    char ch;

    if (right == MAX - 1)
        printf("dequeue is empty\n");
    else
    {
        ch = deq[right];
        right++;
    }
}

void display()
{
    printf("Data in dequeue\n");

    int i = 0;

    while(i<left)
    {
        printf("%c ", deq[i]);
        i++;
    }

    i = right;
    while (i>=0)
    {
        printf("%c ", deq[i]);
        i--;
    }
    
    printf("\n");
}
