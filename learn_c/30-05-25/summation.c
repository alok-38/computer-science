#include <stdio.h>

int main()
{
    int number_of_cards;
    int total_score = 0;

    printf("Enter the number of cards: ");
    scanf("%d", &number_of_cards);

    for (int i = 0; i < number_of_cards; i++)
    {
        int card_score;
        printf("Enter score for card %d: ", i + 1);
        scanf("%d", &card_score);
        total_score += card_score;
    }

    printf("Total score is: %d\n", total_score);

    return 0;
}
