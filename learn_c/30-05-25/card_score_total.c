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

    // Allocate memory dynamically for the card scores
    int *card_scores = (int *)malloc(number_of_cards * sizeof(int));
    if (card_scores == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read the score for each card
    for (int i = 0; i < number_of_cards; i++)
    {
        printf("Enter score for card %d: ", i + 1);
        scanf("%d", &card_scores[i]);
    }

    // Sum up all the card scores
    int total_score = 0;
    for (int i = 0; i < number_of_cards; i++)
    {
        total_score += card_scores[i];
    }

    printf("Total score is: %d\n", total_score);

    // Free the dynamically allocated memory
    free(card_scores);

    return 0;
}
