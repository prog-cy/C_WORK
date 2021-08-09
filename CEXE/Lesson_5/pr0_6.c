// matchstick game when initially 21 sticks we have.
#include<stdio.h>
#include<rupesh.h>

int main(void)
{
    int matchsticks = 21, user, computer;

    while(matchsticks>=1)
    {
        printf("matchsticks right now: %d\n\n", matchsticks);
        printf("User turn to pick matchsticks(1-4): ");
        user = inputInt();
        if(user == matchsticks)
            printf("User lost the game\n");
        else
        {
            printf("Computer turn to pick matchsticks: ");
            computer = 5 - user;
            if (computer == matchsticks)
                printf("Computer lost the game");
        }

        matchsticks = matchsticks-user-computer;
        printf("\n\n");
    }

    printf("Cmputer won the game\n");

    return 0;
}