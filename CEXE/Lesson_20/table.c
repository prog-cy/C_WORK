/*
Write a program and copy the output in Table.txt using redirection '>'
commmand -> .\table > .\Table.txt
*/
#include <stdio.h>

int main(void)
{

    for (int i = 0; i <= 255; i++)
    {
        printf("%-20d --> %20c\n", i, i);
    }
}