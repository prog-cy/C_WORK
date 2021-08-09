// Sorting a set of names in alphabetical order or in lexicographic order and according to lenght of string.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[10][10], tname[10][10], temp[10], tname1[10][10];

    int i, j;

    printf("Enter 10 names: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%s", &names[i][0]);
        getchar();
        strcpy(&tname[i][0], &names[i][0]);
        strcpy(&tname1[i][0], &names[i][0]);
    }

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(&names[i][0], &names[j][0]) > 0)
            {
                strcpy(temp, &names[i][0]);
                strcpy(&names[i][0], &names[j][0]);
                strcpy(&names[j][0], temp);
            }
        }
    }

    printf("\n\n");
    printf("Unsorted_Name\t\tSorted_Name_according_to_dict\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\t\t\t%s\n", &tname[i][0], &names[i][0]);
    }

    // Sorting string on the basis of length
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strlen(&tname[i][0]) > strlen(&tname[j][0]))
            {
                strcpy(temp, &tname[i][0]);
                strcpy(&tname[i][0], &tname[j][0]);
                strcpy(&tname[j][0], temp);
            }
        }
    }

    printf("\n\n");
    printf("Unsorted_Name\t\tSorted_Name_according_to_Lenght\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\t\t\t%s\n", &tname1[i][0], &tname[i][0]);
    }
}