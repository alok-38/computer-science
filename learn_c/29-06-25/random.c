#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANDOM 100

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print a random number between 0 and RAND_MAX
    int r = rand();
    printf("Random number: %d\n", r);
    // Generate a random number between 0 and 99
    int r100 = rand() % MAX_RANDOM;
    printf("Random number (0-99): %d\n", r100);
}
