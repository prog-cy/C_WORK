#include <stdio.h>

void xstrslice(int f_pos, int t_pos, char *s);

int main(void)
{
    char str[] = "Working with strings is fun";

    int f_pos, t_pos, i;

    printf("%s", str);

    printf("\nEnter from which position you want to print: ");
    scanf("%d", &f_pos);

    printf("\nEnter up-to which position you want to print: ");
    scanf("%d", &t_pos);

    xstrslice(f_pos, t_pos, str);
    return 0;
}

void xstrslice(int f_pos, int t_pos,  char *s)
{
    char *str;

    str = ((f_pos - 1) + s);

    if (t_pos > 0)
    {
        for (register int i = 0; i < t_pos; i++)
            printf("%c", str[i]);
    }

    else
        printf("%s", str);
}