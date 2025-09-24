#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    char choice;

    srand(time(0));  // Seed random number generator once

    do
    {
        computer = rand() % 3;
        /*
            0 --> Snake
            1 --> Water
            2 --> Gun
        */
        printf("Choose 0 for Snake, 1 for Water, and 2 for Gun: ");
        scanf("%d", &player);

        printf("Computer chose %d\n", computer);

        if (player == 0 && computer == 0)
            printf("It's a Draw!\n");
            

        else if (player == 0 && computer == 1)
            printf("You Win!\n");
            
        else if (player == 0 && computer == 2)
            printf("You Lose!\n");
            
        else if (player == 1 && computer == 0)
            printf("You Lose!\n");
            
        else if (player == 1 && computer == 1)
            printf("It's a Draw!\n");
            
        else if (player == 1 && computer == 2)
            printf("You Win!\n");
            
        else if (player == 2 && computer == 0)
            printf("You Win!\n");
            
        else if (player == 2 && computer == 1)
            printf("You Lose!\n");
            
        else if (player == 2 && computer == 2)
            printf("It's a Draw!\n");
            
        else
            printf("Invalid input! Try again.\n");

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);  // Note the space before %c to consume newline character

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
