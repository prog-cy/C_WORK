#include<stdio.h>
#define PI

int main()
{
    #ifdef PI //In this line PI is a macroname which is defined
        printf("PI is defined\n");
    #endif

    #ifndef AI //In this line AI is a macroname which is not defined
        printf("AI is not defined\n");
    #endif


    return 0; 

    

}