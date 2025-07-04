#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main()
{
    int user_guess, attempt_counter = 0;
    srand(time(NULL));
    int computer_guess = rand() % (MAX + 1);

    printf("I'm thinking of a number between 0 and %d.\n", MAX);

    do
    {
        printf("What's your guess? ");
        scanf("%d", &user_guess);
        attempt_counter++;

        if (user_guess < 0 || user_guess > MAX)
        {
            printf("Please enter a number between 0 and %d.\n", MAX);
        }
        else if (user_guess < computer_guess)
        {
            printf("Too low! Try again.\n");
        }
        else if (user_guess > computer_guess)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("You got it in %d attempts!\n", attempt_counter);
        }
    } while (user_guess != computer_guess);

    return 0;
}
