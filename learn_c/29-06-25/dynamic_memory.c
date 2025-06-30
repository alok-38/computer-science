#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char *initial_games[] = {"Doom 3", "Half-life 2", "Call of Duty"};
    int num_games = 3;

    // Allocate an array of pointers to hold the copied strings
    char **games = malloc(num_games * sizeof(char *));
    if (games == NULL)
    {
        perror("malloc failed");
        return 1;
    }
}
