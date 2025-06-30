#include <stdio.h>
#include <stdlib.h> // Include for malloc and free

int main()
{
    int number_of_cards;

    printf("Enter the number of cards: ");
    scanf("%d", &number_of_cards);

    if (number_of_cards <= 0)
    {
        printf("Invalid number of cards.\n");
        return 1;
    }

    int *card_scores = (int *)malloc(number_of_cards * sizeof(int));
    if (card_scores == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < number_of_cards; i++)
    {
        printf("Enter score for card %d: ", i + 1);
        scanf("%d", &card_scores[i]);
    }

    int total_score = 0;
    for (int i = 0; i < number_of_cards; i++)
    {
        total_score += card_scores[i];
    }

    printf("Total score is: %d\n", total_score);

    int average = total_score / number_of_cards;
    printf("Average is: %d\n", average);

    free(card_scores);

    return 0;
}
