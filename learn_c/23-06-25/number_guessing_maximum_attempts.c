#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    const int max_attempts = 7;


    srand(time(0));
    number = rand() % 100 + 1;

    printf("Welcome to Guess the Number Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n", max_attempts);

    while (attempts < max_attempts)
    {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
        {
            printf("Too low!\n");
        }
        else if (guess > number)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        }
        if (attempts == max_attempts)
            printf("Sorry, you've used all your attempts. The number was %d.\n", number);
    }
}

