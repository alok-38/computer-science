#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user for height
    printf("Height: ");
    scanf("%i", &height);

    // Build pyramid
    for (int i = 1; i <= height; i++)
    {
        // Print left spaces
        // for (int spaces = 0; spaces < height - i; spaces++)
        // {
        //     printf(" ");
        // }

        // Print left hashes
        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right hashes
        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
