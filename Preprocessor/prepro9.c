#include <stdio.h>

#define TEST 4

int main()
{
    #if TEST<4
        printf("%d",TEST);
    #elif TEST==4
        printf("%d",TEST);
    #endif

    return 0;
}