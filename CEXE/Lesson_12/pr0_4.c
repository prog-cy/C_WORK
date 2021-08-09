#include<stdio.h>
#define AM(a, b) ((a+b)/2)
#define ABS(n) if(n>0)\
                printf("%d\n", n);\
                else\
                    printf("%d\n",(-n));
#define UPPTOLOW(ch) if(ch>='A' && ch<='Z')\
                            printf("%c\n", (ch+32));
#define ISBIGGER(a, b, c) if(a>b && a>c)\
                                printf("%d\n", a);\
                        else if(b>a && b>c)\
                            printf("%d\n", b);\
                        else\
                            printf("%d\n",c);
int main(void)
{
    int a, b, c;
    char ch;

    printf("Enter character ");
    scanf("%c", &ch);

    printf("\nEnter three number ");
    scanf("%d%d%d", &a, &b, &c);

    printf("AM of %d and %d is %d\n", a,b, AM(a, b));

    printf("\nAbsolute value of %d is: ", a);
    ABS(a);

    printf("\nLower case of %c is: ",ch);
    UPPTOLOW(ch);

    printf("\nbiggest of %d, %d and %d is: ",a,b,c);
    ISBIGGER(a, b,c);

    return 0;

}
                