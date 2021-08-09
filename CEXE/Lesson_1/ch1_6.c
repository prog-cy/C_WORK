#include <stdio.h>

int main()
{
    int l = 1189, b = 841;
    printf("size of the paper is:\n");
    printf("A0: %d mm x %d mm\n", l, b);
    printf("A1: %d mm x %d mm\n", b, l / 2);
    printf("A2: %d mm x %d mm\n", l / 2, b / 2);
    printf("A3: %d mm x %d mm\n", b / 2, l / 4);
    printf("A4: %d mm x %d mm\n", l / 4, b / 4);
    printf("A5: %d mm x %d mm\n", b / 4, l / 8);
    printf("A6: %d mm x %d mm\n", l / 8, b / 8);
    printf("A7: %d mm x %d mm\n", b / 8, l / 16);
    printf("A8: %d mm x %d mm\n", l / 16, b / 16);

    return 0;
}