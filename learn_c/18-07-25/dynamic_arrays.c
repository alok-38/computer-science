#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *my_array;
    // how many elements it can hold at first
    int size = 5;
    // Initial allocation
    my_array = malloc(size * sizeof(int));

    // Add more space (resize)
    size = 10;
    my_array = realloc(my_array, size * sizeof(int));

    // Do something

    // Free memory when done
    free(my_array);
    return 0;
}
