#include<stdio.h>
#define ISSMALL(ch) (ch>='a' && ch<='z')
#define ISUPPER(ch) (ch>='A' && ch<='Z')
#define ISALPHA(ch) (ISSMALL(ch) || ISUPPER(ch))
#define ISBIGGER(a, b) if(a>b)\
                        printf("%d\n", a);\
                    else\
                        printf("%d\n", b);

int main(void)
{
    char ch;
    int n1, n2;
    printf("Enter two number ");
    scanf("%d%d", &n1, &n2);
    printf("Enter character ");

    fflush(stdin);
    scanf("%c", &ch);

    if(ISSMALL(ch))
        printf("%c is small case letter\n", ch);
    else if(ISUPPER(ch))
        printf("%c is upper case letter\n", ch);
    if(ISALPHA(ch))
        printf("%c is alphabet\n", ch);
    else
    {
        printf("%c is not alphabet\n", ch);
    }
    
    printf("Bigger in %d and %d is = ", n1, n2);
    ISBIGGER(n1,n2);

    return 0;
}