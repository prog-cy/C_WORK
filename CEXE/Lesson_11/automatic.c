// Program for automatic storage class
/*
    1. Storage = Memory
    2. Default value =  garbage value
    3. Scope = Local to the  block in which the variable is defined
    4. Life = It does not exist outside of the block in which it is defined
*/
#include<stdio.h>

int main(void)
{
    auto int a = 10;

    if(a == 10)
    {
        auto int a = 20;
        if(a == 20)
        {
            auto int a = 30;
            a = 40;
            printf("a = %d\n", a);
        }

        printf("a = %d\n", a);
    }

    printf("a = %d\n", a);

    printf("\n\n");

    return 0;
}