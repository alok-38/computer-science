#include <stdio.h>

int main()
{
    int population_size = 100; // Total population size (N)
    int sample_size = 10;      // You need to define 'size' before using it

    // Dynamically allocate memory for population and sample
    int *population = malloc(sizeof(int) * population_size);
    int *sample = malloc(sizeof(int) * sample_size);

    if (population == NULL || sample == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
}