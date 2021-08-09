#include<stdio.h>
#define COUNTRY India


int main()
{
    #if COUNTRY==India
        printf("Indian rupees\n");
    #endif

    return 0;

}