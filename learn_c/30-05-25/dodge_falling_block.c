#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> // For _kbhit() and _getch() on Windows

#define WIDTH 20
#define HEIGHT 10

typedef struct
{
    int x, y;
} Block;

int main()
{
    int player_x = WIDTH / 2;
    int game_over = 0;
    Block blocks[5]; // max 5 falling blocks
    int i;

    // Initialize blocks at random x positions, y=0 (top)
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        blocks[i].x = rand() % WIDTH;
        blocks[i].y = 0;
    }

    while (!game_over)
    {
        // 1. Input handling
        if (_kbhit())
        {
            char ch = _getch();
            if (ch == 'a' && player_x > 0)
                player_x--;
            else if (ch == 'd' && player_x < WIDTH - 1)
                player_x++;
            else if (ch == 'q') // quit
                break;
        }

        // 2. Update block positions (fall down)
        for (i = 0; i < 5; i++)
        {
            blocks[i].y++;

            // Reset block to top with new random x if it falls off screen
            if (blocks[i].y >= HEIGHT)
            {
                blocks[i].y = 0;
                blocks[i].x = rand() % WIDTH;
            }

            // 3. Collision detection
            if (blocks[i].y == HEIGHT - 1 && blocks[i].x == player_x)
            {
                game_over = 1;
            }
        }

        // 4. Render (console)
        system("cls"); // clear screen (Windows)

        for (int y = 0; y < HEIGHT; y++)
        {
            for (int x = 0; x < WIDTH; x++)
            {
                int drawn = 0;

                // Draw blocks
                for (i = 0; i < 5; i++)
                {
                    if (blocks[i].x == x && blocks[i].y == y)
                    {
                        printf("#");
                        drawn = 1;
                        break;
                    }
                }

                // Draw player
                if (!drawn && y == HEIGHT - 1 && x == player_x)
                {
                    printf("@");
                    drawn = 1;
                }

                if (!drawn)
                    printf(".");
            }
            printf("\n");
        }

        printf("Use 'a' and 'd' to move, 'q' to quit.\n");

        // Slow down the loop for visible movement
        _sleep(200);
    }

    if (game_over)
        printf("Game Over! You got hit.\n");

    return 0;
}
