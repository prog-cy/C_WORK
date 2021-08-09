// program for all data types in c
#include <stdio.h>

int main(void)
{
    signed char c1 = 'a';
    unsigned char c2 = 253;

    printf("c1 = %c c2 = %c\n", c1, c2);

    short s = 32767;
    unsigned short s1 = 65535;

    printf("s = %d s1 = %u\n", s, s1);

    int i = 2147483647;
    unsigned int i1 = 4294967295;

    printf("i = %d i1 = %u\n", i, i1);

    long l = 2147483647;
    unsigned long l1 = 4294967295;

    printf("l = %ld l1 = %lu\n", l, l1);

    float f = 3.4e38;
    printf("f = %f\n", f);

    double d = 1.7e308;
    printf("d = %lf\n", d);

    return 0;

}