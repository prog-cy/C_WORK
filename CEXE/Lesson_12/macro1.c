#include<stdio.h>
#define AND &&
#define OR ||
#define FOUND printf("true\n");

int main(void)
{
    if(10>25 OR 10<50)
        FOUND;
    if(10<24 AND 10<23)
        FOUND;

    return 0;
}