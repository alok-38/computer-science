#include <stdio.h>

int main()
{
    char array[5] = {'a', 'A', 'b', 'z', 'M'};
    char *same_array = array;
    char **fance_same_array = &same_array;

    printf("Printing using array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Array element %d (as char): %c, (as int): %i\n", i, array[i], array[i]);
    }

    printf("\nPrinting using pointer *same_array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %c\n", i, same_array[i]);
    }

    printf("\nPrinting using pointer to pointer **fance_same_array:\n");
    for (int i = 0; i < 5; i++)
    {
        // Dereference fance_same_array to get same_array, then access element i
        printf("Element %d: %c\n", i, (*fance_same_array)[i]);
    }

    return 0;
}
