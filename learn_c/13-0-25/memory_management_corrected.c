#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main(void)
{
    int *data = malloc(100 * sizeof(int));
    if (data == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Pointer address: %p\n", (void *)data); // Print pointer safely
    // Use data here...

    free(data); // Prevent memory leak
    return 0;
}
