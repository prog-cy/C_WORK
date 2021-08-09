#include<stdio.h>
#include<rupesh.h>
#include<stdlib.h>

int main(void)
{
    int ch, f_s_num;

    while(1)
    {
        printf("1: First class\n");
        printf("2: Second class\n");
        printf("3: Third class\n");
        printf("4: Exit\n");

        printf("Enter from which class you belong: ");
        ch = inputInt();

        switch (ch)
        {
        case 1:
            printf("\nEnter Number of subject you failed: ");
            f_s_num = inputInt();
            if(f_s_num>3)
                printf("No grace mark\n");
            else
            {
                printf("5 grace marks\n");
            }
            
            break;

        case 2:
            printf("\nEnter Number of subject you failed: ");
            f_s_num = inputInt();
            if(f_s_num>2)
                printf("No grace mark\n");
            else
            {
                printf("4 grace marks\n");
            }
            break;
        case 3:
            printf("\nEnter Number of subject you failed: ");
            f_s_num = inputInt();
            if(f_s_num>1)
                printf("No grace marks\n");
            else
            {
                printf("5 grace marks\n");
            }
            break;
        case 4:
            exit(1);
            
        default:
            break;
        }

        printf("\n");
    }

    return 0;
}