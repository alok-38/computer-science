#include <stdio.h>

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);

    for (int spaces = 0; spaces < height; spaces++)
    {
        // Print spaces first
        for (int j = 0; j < (height - spaces) - 1; j++)
        {
            printf(" ");
        }
        // Then print hashes
        for (int k = 0; k <= spaces; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
