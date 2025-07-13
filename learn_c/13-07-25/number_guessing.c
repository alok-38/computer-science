#include <stdio.h>

int main(void)
{
    int guess;

    while (scanf("%d", &guess) != EOF)
    {
        if (guess == 42)
        {
            printf("Good guess!\n");
            break;
        }
        else if (guess < 42)
        {
            printf("Too low.\n");
        }
        else
        {
            printf("Too High!!");
        }
    }
}