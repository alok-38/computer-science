#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    // seed random number generator
    srand(time(0));
    // Random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to Guess the Number Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    // Game loop
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    }
    while (guess != number);
}
