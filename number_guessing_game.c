#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playAgain;

    do {
        int choice, maxRange;

        // Difficulty Menu
        printf("\n==============================\n");
        printf(" NUMBER GUESSING GAME\n");
        printf("==============================\n");
        printf("Select Difficulty Level:\n");
        printf("1. Easy   (1 - 50)\n");
        printf("2. Medium (1 - 100)\n");
        printf("3. Hard   (1 - 200)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Set range based on difficulty
        if (choice == 1)
            maxRange = 50;
        else if (choice == 2)
            maxRange = 100;
        else
            maxRange = 200;

        srand(time(0));
        int random_number = rand() % maxRange + 1;

        int guess, attempts = 0;

        printf("\nI have selected a number between 1 and %d.\n", maxRange);
        printf("Try to guess it!\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            attempts++;
            
            // Checks the guess
            if (guess < random_number)
                printf("Too Low! Try again.\n");
            else if (guess > random_number)
                printf("Too High! Try again.\n");
            else
                printf("Correct! You guessed it!\n");

        } while (guess != random_number);

        printf("\nYou guessed the number %d in %d attempts.\n", random_number, attempts);

        // Ask to play again
        printf("\nDo you want to play again? (1 = Yes / 0 = No): ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("\nThanks for playing! Goodbye \n");

    return 0;
}
