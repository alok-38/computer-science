#include <stdio.h>

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}