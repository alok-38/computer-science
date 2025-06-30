#include <stdio.h>

int main()
{
    char *games[] = {"Doom 3", "Half-life 2", "Call of Duty"};
    // Print the games to verify
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", games[i]);
    }
}
