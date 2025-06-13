#include <stdio.h>

int main()
{
    int rating_counters[11], response;

    for (int i = 1; i < 10; i++)
    {
        rating_counters[i] = 0;
    }

    printf("Enter your responses\n");

    for (int i = 1; i <= 20; i++)
    {
        scanf("%i", &response);

        if (response < 1 || response > 10)
        {
            printf("Bad response: %i\n", response);
        }
        else
        {
            rating_counters[response]++;
        }
    }

    printf("\n\nRating\tNumber of Responses\n");
    printf("----\t--------------------------\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%4i%14i\n", i, rating_counters[i]);
    }
}
