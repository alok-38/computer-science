#include <stdio.h>

#define WIDTH 10
#define HEIGHT 5

int main()
{
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (x == 0 || x == WIDTH - 1 || y == 0 || y == HEIGHT - 1)
                // Wall
                printf("#");
            else
                // Inside space
                printf(" ");
        }
        printf("\n");
    }
}


