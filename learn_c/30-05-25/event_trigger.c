#include <stdio.h>

// Function to simulate the triggered event
void trigger_event()
{
    printf("Event triggered!\n");
}

int main()
{
    int time_elapsed;

    // Example: simulate various time values
    for (time_elapsed = 0; time_elapsed < 15; time_elapsed++)
    {
        printf("Time elapsed: %d seconds\n", time_elapsed);

        if (time_elapsed >= 5 && time_elapsed < 10)
        {
            trigger_event();
        }
    }

    return 0;
}
