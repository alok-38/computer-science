#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height (positive integer): ");
        scanf("%i", &height);
    } while (height <= 0);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
