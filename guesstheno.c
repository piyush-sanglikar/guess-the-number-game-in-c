
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0, max_attempt = 7;

    srand(time(NULL));

    random = rand() % 100 + 1;

    printf("\n========================================\n");
    printf("          NUMBER GUESSING GAME\n");
    printf("========================================\n");

    printf("\nWelcome to the Number Guessing Game!\n");
    printf("\nYou have %d attempts to guess the number.\n", max_attempt);

    do
    {
        printf("\nEnter your guess (1-100): ");
        scanf("%d", &guess);

        // Input validation
        if(guess < 1 || guess > 100)
        {
            printf("\nInvalid input! Please enter between 1 and 100.\n");
            continue;
        }

        no_of_guess++;

        if(guess < random)
        {
            printf("\n        \u2191 Guess a larger number!\n");
        }
        else if(guess > random)
        {
            printf("\n        \u2193 Guess a smaller number!\n");
        }
        else
        {
            printf("\n========================================\n");
            printf("          CONGRATULATIONS!\n");
            printf("========================================\n");

            printf("\nYou guessed the correct number in %d attempts!\n", no_of_guess);

            printf("\n========================================\n");
            printf("             GAME OVER\n");
            printf("========================================\n");

            printf("\nDeveloped by Piyush\n");

            return 0;
        }

        printf("\nAttempts remaining: %d\n", max_attempt - no_of_guess);

    } while(no_of_guess < max_attempt);

    printf("\n========================================\n");
    printf("             GAME OVER\n");
    printf("========================================\n");

    printf("\nSorry! You have used all 7 attempts.\n");
    printf("The correct number was: %d\n", random);

    printf("\nDeveloped by Piyush\n");

    return 0;
}